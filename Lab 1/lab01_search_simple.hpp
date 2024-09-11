/***
 * University of Ioannina - Department of Informatics and Telecommunications
 * Gogos Christos - Arta 2021
 */

#ifndef __LAB01_SEARCH_SIMPLE_HPP__
#define __LAB01_SEARCH_SIMPLE_HPP__

#include "lab01_graph.hpp"

// Ο αλγόριθμος αναζήτησης κατά πλάτος χωρίς αποθήκευση της διαδρομής 
void breadth_first_search_base(struct di_graph graph, string start_vertex,
                               string goal_vertex);

// Ο αλγόριθμος αναζήτησης κατά βάθος χωρίς αποθήκευση της διαδρομής 
void depth_first_search_base(struct di_graph graph, string start_vertex,
                             string goal_vertex);

#endif