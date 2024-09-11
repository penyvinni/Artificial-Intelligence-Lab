/***
 * University of Ioannina - Department of Informatics and Telecommunications
 * Gogos Christos - Arta 2021
 * 
 * 
 * Compile Command:g++ lab01_graph.cpp lab01_01.cpp -o lab01_01 -Wall -std=c++11
 * Run Command:./lab01_01 tour_romania.txt
 */
#include "lab01_graph.hpp"

using namespace std;

int main(int argc, char **argv) { 
  if (argc != 2) {
    cout << "Wrong number of arguments" << endl;
    exit(-1);
  }
  struct di_graph graph = read_data(argv[1]);
  print_graph_info(graph);
  free_memory(graph);
}
