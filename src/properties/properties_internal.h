/* -*- mode: C -*-  */
/*
   IGraph library.
   Copyright (C) 2011-2016  Gabor Csardi <csardi.gabor@gmail.com>
   334 Harvard st, Cambridge, MA, 02138 USA

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA

*/

#ifndef IGRAPH_PROPERTIES_INTERNAL_H
#define IGRAPH_PROPERTIES_INTERNAL_H

#include "igraph_adjlist.h"
#include "igraph_constants.h"
#include "igraph_iterators.h"
#include "igraph_types.h"

int igraph_i_induced_subgraph_suggest_implementation(
    const igraph_t *graph, const igraph_vs_t vids,
    igraph_subgraph_implementation_t* result
);

int igraph_i_subgraph_copy_and_delete(const igraph_t *graph, igraph_t *res,
                                      const igraph_vs_t vids,
                                      igraph_vector_t *map,
                                      igraph_vector_t *invmap);

int igraph_i_subgraph_create_from_scratch(const igraph_t *graph,
        igraph_t *res,
        const igraph_vs_t vids,
        igraph_vector_t *map,
        igraph_vector_t *invmap);

int igraph_i_trans4_al_simplify(igraph_adjlist_t *al,
                                const igraph_vector_int_t *rank);

#endif
