int main() {
    int V = 5; // Number of vertices
    std::vector<std::vector<int>> edges = {{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};
    int source = 0; // Source vertex

    std::vector<int> result = bellmanFord(V, edges, source);

    // Check for negative cycle and display the result
    bool hasNegativeCycle = false;

    // Run the algorithm for one more iteration to detect negative cycles
    for (auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int weight = edge[2];
        if (result[u] != INT_MAX && result[u] + weight < result[v]) {
            hasNegativeCycle = true;
            break;
        }
    }

    if (hasNegativeCycle) {
        std::cout << "Negative cycle detected." << std::endl;
    } else {
        std::cout << "Shortest distances from source vertex " << source << " are:" << std::endl;
        for (int i = 0; i < V; i++) {
            std::cout << "Vertex " << i << ": " << result[i] << std::endl;
        }
    }

    return 0;
}
