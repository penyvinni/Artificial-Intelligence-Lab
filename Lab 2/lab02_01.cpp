/***
 * University of Ioannina - Department of Informatics and Telecommunications
 * Gogos Christos - Arta 2021
 * 
 * 
 * Compile Command:g++ lab02_graph.cpp lab02_01.cpp -o lab02_01 -Wall -std=c++11
 * Run Command:./lab02_01 tour_romania_h.txt
 */

#include "lab02_graph.hpp"

int main(int argc, char **argv) { 
  if (argc != 2) {
    cout << "Wrong number of arguments" << endl;
    exit(-1);
  }
  struct di_graph graph = read_data(argv[1]);
  print_graph_info(graph);
  free_memory(graph);
}
