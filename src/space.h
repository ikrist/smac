/*
SMAC -- Shape Matching Analysis Code
(SMAC) Open Source Software License Copyright 2012 The Regents of the 
University of Michigan All rights reserved.

SMAC may contain modifications ("Contributions") provided, and to which
copyright is held, by various Contributors who have granted The Regents of the
University of Michigan the right to modify and/or distribute such Contributions.

You may redistribute, use, and create derivate works of SMAC, in source
and binary forms, provided you abide by the following conditions:

* Redistributions of source code must retain the above copyright notice, this
list of conditions, and the following disclaimer both in the code and
prominently in any materials provided with the distribution.

* Redistributions in binary form must reproduce the above copyright notice, this
list of conditions, and the following disclaimer in the documentation and/or
other materials provided with the distribution.

* Apart from the above required attributions, neither the name of the copyright
holder nor the names of LibTPS's contributors may be used to endorse or
promote products derived from this software without specific prior written
permission.

Disclaimer

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS ``AS IS'' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND/OR ANY
WARRANTIES THAT THIS SOFTWARE IS FREE OF INFRINGEMENT ARE DISCLAIMED.

IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*//*
 *  f_space.h
 *  glotzilla
 *
 *  Created by askeys on 7/16/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SMSPACE
#define SMSPACE

#include "typedefs.h"

namespace smac 
{
	/**
	\brief the squared distance between two coordinates
	\ingroup util
	*/
	double distancesq(coord_t& x1, coord_t& x2, 
		coord_t&, bool_array_t&); 

	/**
	\brief the squared distance between two coordinates
	\ingroup util
	*/
	double distancesq(coord_t& x1, coord_t& x2, 
		box_t&); 

	/**
	\brief the squared distance between two coordinates
	\ingroup util
	*/
	double distancesq(coord_t& x1, coord_t& x2); 

	/**
	\brief the distance between two coordinates
	\ingroup util
	*/
	double distance(coord_t& x1, coord_t& x2, 
		coord_t& period, bool_array_t&); 

	/**
	\brief the distance between two coordinates
	\ingroup util
	*/
	double distance(coord_t& x1, coord_t& x2); 

	/**
	\brief the distance between two coordinates
	\ingroup util
	*/
	coord_t distancevec(coord_t& x1, coord_t& x2, 
		coord_t& period, bool_array_t&); 
	
	/**
	\brief Checks whether all the positions in a list are in the box
	\ingroup util
	*/    
    bool inbox(coordlist_t& x, box_t box);

	/**
	\brief Checks whether a coordinate is in the box
	\ingroup util
	*/    
    bool inbox(coord_t& x, box_t box);
    
	/**
	\brief applied the periodic boundary conditions
	\ingroup util
	*/
	void pbc(coord_t& x, coord_t& period, bool_array_t&);

	/**
	\brief applied the periodic boundary conditions
	\ingroup util
	*/
	void pbc(double& x, double per, bool periodic=true);
}

#endif
