#ifndef _GRAPH_H_
#define _GRAPH_H_


#include <iostream>
#include <vector>
#include <string>
#include "HashTable.h"

struct Edge {
    std::string v1;
    std::string v2;
    int weight;
};

struct Vertex {
    std::string vertex_key;
    std::vector<Edge> edges {};
};

class Graph {
public:
    HashTable<Vertex*> graph;
    std::vector<std::string> vertices;

    Graph(size_t size);
    ~Graph();

    void add_edge(std::string vertex1, std::string vertex2, int weight);
    int dijkstra(std::string source, std::string target) const;
private:
};


#endif