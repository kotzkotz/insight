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

#ifndef DOMAINS_CONCRETE_CONCRETEMEMORY_HH
#define DOMAINS_CONCRETE_CONCRETEMEMORY_HH

#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>

#include <map>
#include <tr1/unordered_map>

#include <domains/concrete/ConcreteValue.hh>
#include <domains/concrete/ConcreteAddress.hh>

#include <kernel/Memory.hh>
#include <kernel/RegisterMap.hh>

#include <utils/Object.hh>
#include <utils/tools.hh>

/** \brief ConcreteMemory module which manage memory and also registers. */
class ConcreteMemory : public Memory<ConcreteAddress, ConcreteValue>,
		       public RegisterMap<ConcreteValue>
{
  /** \brief Data structure used to encode the concrete memory. */
  typedef std::tr1::unordered_map<address_t,
				  uint8_t,
				  std::tr1::hash<address_t> > MemoryMap;

  /** \brief The actual storage into memory. */
  MemoryMap memory;

public:
  /***************************************************************************/
  /* Constructors                                                            */
  /***************************************************************************/

  /** \brief Default constructor : the memory is empty. */
  ConcreteMemory();

  /** \brief Copy constructor. */
  ConcreteMemory(ConcreteMemory &);

  /** \brief Destructor. */
  virtual ~ConcreteMemory();


  /***************************************************************************/
  /* Memory Access                                                           */
  /***************************************************************************/

  /** \brief Retrieve the content of the memory cell at a given
   *   address and according to a specified endianness. The 'size'
   *   parameter is a number of bytes. Note that if the memory cell
   *   has not yet been set, the function will raise an exception
   *   UndefinedValue. */
  virtual ConcreteValue get(const ConcreteAddress &,
			    const int size,
			    const Architecture::endianness_t) const
    throw (UndefinedValueException);

  /** \brief Put the value into the memory cell at a given address. */
  virtual void put(const ConcreteAddress &,
		   const ConcreteValue &,
		   const Architecture::endianness_t);

  /** \brief Retrieve the content of a register. Note that if the
   *   register has not yet been set, the function will raise an
   *   exception 'UndefinedValue'. */
  virtual ConcreteValue get(const RegisterDesc *) const
    throw (UndefinedValueException);

  /** \brief Put the value v into the register */
  virtual void put(const RegisterDesc *, ConcreteValue);

  /** \brief Tells if the register has been written or not. */
  bool is_defined(const RegisterDesc *) const;

  /** \brief Tells if the memory cell has been written or not. */
  bool is_defined(const ConcreteAddress &) const;


  /***************************************************************************/
  /* Utils                                                                   */
  /***************************************************************************/
  void output_text(std::ostream &) const;
};

#endif /* DOMAINS_CONCRETE_CONCRETEMEMORY_HH */
