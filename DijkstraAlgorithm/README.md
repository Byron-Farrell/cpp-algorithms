# Dijkstra's Algorithm

## Code Example

```c++
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
```
