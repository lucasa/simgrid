/* Copyright (c) 2006-2017. The SimGrid Team. All rights reserved.          */

/* This program is free software; you can redistribute it and/or modify it
 * under the terms of the license (GNU LGPL) which comes with this package. */

#ifndef XBT_GRAPH_PRIVATE_H
#define XBT_GRAPH_PRIVATE_H

#include "xbt/base.h"
#include "xbt/dynar.h"
#include "xbt/graph.h"

XBT_PRIVATE void xbt_floyd_algorithm(xbt_graph_t g, double *adj, double *d, xbt_node_t * p);

#endif
