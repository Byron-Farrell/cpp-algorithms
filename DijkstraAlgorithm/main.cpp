#include <iostream>
#include <string>
#include "includes/Graph.h"


int main() {

    Graph graph {10};

    graph.add_edge("0", "1", 4);
    graph.add_edge("1", "2", 8);
    graph.add_edge("2", "3", 7);
    graph.add_edge("3", "4", 9);
    graph.add_edge("4", "5", 10);
    graph.add_edge("5", "6", 2);
    graph.add_edge("6", "7", 1);
    graph.add_edge("7", "8", 7);
    graph.add_edge("0", "7", 8);
    graph.add_edge("1", "7", 11);
    graph.add_edge("2", "8", 2);
    graph.add_edge("8", "6", 6);
    graph.add_edge("2", "5", 4);
    graph.add_edge("3", "5", 14);

    std::cout << graph.dijkstra("0", "8") << std::endl;

    return 0;
}