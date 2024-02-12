#include <iostream>
#include <limits>
#include "../includes/HashTable.h"
#include "../includes/Graph.h"
#include <algorithm>

Graph::Graph(size_t size) : graph(size) {
    vertices = {};
}

Graph::~Graph() {
    for (std::string key: vertices) {
        if (graph.exists(key)) {
            delete graph.get(key);
        }
    }
}

void Graph::add_edge(std::string vertex1, std::string vertex2, int weight) {
    if (!graph.exists(vertex1)) {
        vertices.push_back(vertex1);
        Vertex *newVertex = new Vertex;
        newVertex->vertex_key = vertex1;
        graph.add(vertex1, newVertex);
    }
    if (!graph.exists(vertex2)) {
        Vertex *newVertex = new Vertex;
        newVertex->vertex_key = vertex2;
        graph.add(vertex2, newVertex);
        vertices.push_back(vertex2);
    }

    Vertex *v1 = graph.get(vertex1);
    Vertex *v2 = graph.get(vertex2);

    Edge edge = Edge();
    edge.weight = weight;

    edge.v1 = vertex1;
    edge.v2 = vertex2;
    v1->edges.push_back(edge);

    edge.v1 = vertex2;
    edge.v2 = vertex1;
    v2->edges.push_back(edge);
}

int Graph::dijkstra(std::string source, std::string target) const {
    HashTable<int> paths {10};
    std::vector<std::string> visited {};
    std::vector<std::string> not_visited = vertices;

    for (std::string vertex_key : vertices) {
        paths.add(vertex_key, std::numeric_limits<int>::max());
    }

    paths.set(source, 0);

    std::string current_vertex_key = source;

    while (visited.size() < vertices.size()) {
        visited.push_back(current_vertex_key);

        for (Edge e : graph.get(current_vertex_key)->edges) {
            int path_weight = paths.get(e.v1) + e.weight;

            if (path_weight < paths.get(e.v2)) {
                paths.set(e.v2, path_weight);
            }
        }

        int min = std::numeric_limits<int>::max();
        std::string min_vertex_key = "";

        for (std::string vertex_key : vertices) {

            if (std::find(visited.begin(), visited.end(), vertex_key) == visited.end()) {

                if (paths.get(vertex_key) < min) {
                    min = paths.get(vertex_key);
                    min_vertex_key = vertex_key;
                }

            }
        }

        current_vertex_key = min_vertex_key;

    }

    int min = std::numeric_limits<int>::max();
    for (std::string vertex_key : vertices) {
        if (paths.get(vertex_key) < min) {
            min = paths.get(vertex_key);
        }
    }

    return paths.get(target);
}