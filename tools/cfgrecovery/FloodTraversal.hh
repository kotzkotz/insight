/*-
 * Copyright (C) 2012, Centre National de la Recherche Scientifique,
 *                     Institut Polytechnique de Bordeaux,
 *                     Universite Bordeaux 1.
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

#ifndef CFGRECOVERY_FLOOD_TRAVERSAL_HH
#define CFGRECOVERY_FlOOD_TRAVERSAL_HH

#include "ConcreteMemoryTraversal.hh"
#include "cfgrecovery.hh"

class FloodTraversal : public ConcreteMemoryTraversal
{
public :
  FloodTraversal(bool scan_all, 
		 const ConcreteMemory *memory, Decoder *decoder);
  ~FloodTraversal ();

protected:
  void treat_new_arrow(Microcode *,
		       const MicrocodeNode *, const StmtArrow *arrow, 
		       const ConcreteAddress &next);
private:
  bool scan_all;
};

/* Linear sweep disassembly method */
Microcode * flood_traversal(const ConcreteAddress * entrypoint,
			    ConcreteMemory * memory,
			    Decoder * decoder);

#endif /* CFGRECOVERY_FLOOD_TRAVERSAL_HH */
