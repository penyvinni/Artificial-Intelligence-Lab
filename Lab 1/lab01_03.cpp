/***
 * University of Ioannina - Department of Informatics and Telecommunications
 * Gogos Christos - Arta 2021
 * 
 * 
 * Compile Command:g++ lab01_graph.cpp lab01_search.cpp lab01_03.cpp -o lab01_03 -std=c++11
 * Run Command:./lab01_03 tour_romania.txt C B bfs
 */
#include "lab01_search.hpp"

int main(int argc, char **argv) {
  struct di_graph graph;
  if (argc == 5) {
    graph = read_data(argv[1]);
    string start_vertex = argv[2];
    string goal_vertex = argv[3];
    string search_method = argv[4];
    if (search_method.compare("bfs") == 0)
      breadth_first_search(graph, start_vertex, goal_vertex);
    else if (search_method.compare("dfs") == 0)
      depth_first_search(graph, start_vertex, goal_vertex);
    else if (search_method.compare("ucs") == 0)
      uniform_cost_search(graph, start_vertex, goal_vertex);
    else
      cerr << "invalid option" << endl;
  } else {
    cerr << "wrong number of arguments" << endl;
  }
  free_memory(graph);
}
