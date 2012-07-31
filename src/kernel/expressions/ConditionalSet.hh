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
#ifndef KERNEL_EXPRESSIONS_CONDITIONALSET_HH
#define KERNEL_EXPRESSIONS_CONDITIONALSET_HH

#include <kernel/expressions/Formula.hh>

/* This class encloses static methods to manipulate logical formulae as encoding
 * sets of elements. It uses a special symbol EltSymbol. A formula phi contains
 * an element e iff phi [ EltSymbol / elt ] is true.
 *
 * Note that we could add intervals and get BDD.
 * TODO: on pourrait ajouter une formule atomique de type \in */
class ConditionalSet
{
public:

  static Variable *EltSymbol ();

  static void cs_simplify(Formula **);
  static std::vector<Expr*> cs_possible_values (const Formula * set);

  /* Extract the condition for e to belong to set */
  static Formula * cs_condition_for_belonging (Formula * set, Expr * e);

  /* Compute the upper set eliminating all the conditions */
  static Formula * cs_flatten (const Formula * set);

  /* Reduces the formula set by replacing EltSymbol by elt (i.e. set [EltSymbol/elt]) */
  static Formula *cs_contains(const Formula *set, const Expr *elt);

  /* Returns true iff set[EltSymbol/elt] can be reduced to true */
  static bool cs_compute_contains(const Formula *set, const Expr *elt);

  /* return true iff elt could not be decided to be in set (result is put in set).
   * the new set contains elt iff the old set did already or cond is true).
   * Note the expression elt is copied */
  static bool cs_conditional_add(Formula *cond, Formula **set, Expr *elt);

  /* shortcuts with trivial true condition (elt is cloned) */
  static bool cs_add(Formula **set, const Expr *elt);

  /* return true iff set2 has not been determined to be included in set1 (result is put in set1),
   * the new set1 contains set2 iff the old set1 did or cond is true.
   * the formula set2 is copied */
  static bool cs_conditional_union(Formula *cond, Formula **set1, Formula *set2);

  /* shortcuts with trivial true condition */
  static bool cs_union(Formula **set1, const Formula *set2);

  /* return true iff elt has been determined to be in set before.
   * result is put into set */
  static bool cs_remove(Formula **set, const Expr *elt);
};

#endif /* KERNEL_EXPRESSIONS_CONDITIONALSET_HH */
