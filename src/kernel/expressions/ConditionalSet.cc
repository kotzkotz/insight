/*-
 * Copyright (C) 2010-2012, Centre National de la Recherche Scientifique,
 *                          Institut Polytechnique de Bordeaux,
 *                          Universite Bordeaux 1.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <kernel/expressions/ConditionalSet.hh>

#include <cassert>
#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <utils/infrastructure.hh>
#include <kernel/Expressions.hh>
#include <kernel/expressions/PatternMatching.hh>

using namespace std;

Variable *
ConditionalSet::EltSymbol ()
{
  return Variable::create ("elt");
}

inline Expr *IsIn (const Expr *elt) 
{
  return BinaryApp::create (EQ, (Expr*) ConditionalSet::EltSymbol (), 
			    (Expr*) elt->ref ());
}

void ConditionalSet::cs_simplify(Formula **set)
{
  Formula::simplify_level0(set);
}

// ATTENTION CHANTIER CHANTIER CHANTIER
Formula * ConditionalSet::cs_condition_for_belonging (Formula * set, Expr *) {

	Formula * simple_set = set->ref ();
	cs_simplify (&simple_set);

	if (simple_set->is_DisjunctiveFormula()) {
	  Formula * the_cond = NULL;
	  //new DisjunctiveFormula();
		std::vector<Formula *> clauses = ((DisjunctiveFormula *) simple_set)->get_clauses();
		for (std::vector<Formula*>::iterator c=clauses.begin(); c!=clauses.end(); c++) {
			/* tester si la clause contient ELT = e, si oui, supprimer l'occurence de ELT=e et l'ajouter dans the_cond */
		}
		return the_cond;
	}
	/* sinon il n'y a qu'une seule clause */
	throw std::runtime_error ("cs_condition_for_belonging");
	return NULL;
}


class ExtractEltRule : public FormulaReplacingRule
{
public:
  std::vector<Expr *> elt_list;
  void add_elt (Expr * e) {
    for (int i=0; i<(int) elt_list.size(); i++)
      if (e == elt_list[i]) 
	{
	  e->deref ();
	  return;
	}
    elt_list.push_back(e);
  };

  Formula * f(const Formula *e) {
    Variable *X = Variable::create ("X"); 
    Formula * elt_def_pattern = 
      Formula::Equality((Expr *) ConditionalSet::EltSymbol (), 
			(Expr *) X->ref ());
    std::list<const Variable *> free_variables; 

    free_variables.push_back(X);
    try {
      PatternMatching * matchings = 
	elt_def_pattern->pattern_matching(e, free_variables);

      assert (matchings->has (X));
      add_elt ((Expr*) matchings->get (X)->ref ());
      delete matchings;
    } catch (Expr::PatternMatchingFailure &) {}
    X->deref ();
    elt_def_pattern->deref ();

    throw NotApplicable();
  }
};

std::vector<Expr*> 
ConditionalSet::cs_possible_values (const Formula *set) 
{
  ExtractEltRule r;
  try { set->bottom_up_apply (&r)->deref (); } catch (NotApplicable &) {};
  return r.elt_list;
}

Formula * 
ConditionalSet::cs_flatten (const Formula *set) 
{
  std::vector<Expr*> all_values = cs_possible_values (set);
  Formula *flat_set = BooleanConstantFormula::create (false);

  for (int i = 0; i< (int) all_values.size (); i++) 
    {
      cs_add (&flat_set, all_values[i]);
      all_values[i]->deref ();
    }

  return flat_set;
}

Formula *
ConditionalSet::cs_contains (const Formula *set, const Expr *elt)
{
  Variable *eltsym = ConditionalSet::EltSymbol ();
  Formula *new_set = set->replace_variable (eltsym, elt);  
  Formula::simplify_level0 (&new_set);
  eltsym->deref ();

  return new_set;
}

bool 
ConditionalSet::cs_compute_contains (const Formula *set, const Expr *elt)
{
  Formula *result = ConditionalSet::cs_contains (set, elt);
  bool result_bool = result->eval_level0 ();
  result->deref ();

  return result_bool;
}

bool ConditionalSet::cs_conditional_add(Formula *cond, Formula **set, Expr *elt)
{
  if (!ConditionalSet::cs_compute_contains(*set, elt))
    {
      Formula::add_disjunctive_clause(set, Formula::implies(cond, IsIn(elt)));
      Formula::simplify_level0(set);
      return true;
    }
  else return false;
}

bool 
ConditionalSet::cs_conditional_union(Formula *cond, Formula **set1, 
				     Formula *set2)
{
  Formula *tmp = Formula::implies(set2->ref (), (*set1)->ref ());
  Formula *included = tmp->simplify_level0();
  tmp->deref ();

  if (!(included->eval_level0()))
    {
      included->deref ();
      Formula::add_disjunctive_clause(set1, Formula::implies(cond, set2));
      Formula::simplify_level0(set1);

      return true;
    }
  else
    {
      included->deref ();
      return false;
    }
}

bool 
ConditionalSet::cs_remove(Formula **set, const Expr *elt)
{
  bool was_in = cs_compute_contains (*set, elt);
  Formula::add_conjunctive_clause (set, NegationFormula::create (IsIn (elt)));
  Formula::simplify_level0 (set);

  return was_in;
}

bool 
ConditionalSet::cs_add(Formula **set, const Expr *elt)
{
  bool result = ConditionalSet::cs_compute_contains(*set, elt);

  if (! result)
    {
      Formula::add_disjunctive_clause (set, IsIn (elt));
      Formula::simplify_level0 (set);
    }

  return result;
}

bool 
ConditionalSet::cs_union(Formula **set1, const Formula *set2)
{
  bool result = (set2 == *set1);

  if (! result)
    {
      Formula *tmp = Formula::implies (set2->ref (), (*set1)->ref ());
      Formula *included = tmp->simplify_level0 ();
      tmp->deref ();

      if (! included->eval_level0 ())
	{
	  Formula::add_disjunctive_clause (set1, set2->ref ());
	  Formula::simplify_level0(set1);
	  result = true;
	}
      included->deref ();
    }
  return result;
}
