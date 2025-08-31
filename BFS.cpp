#include <bits/stdc++.h>
using namespace std;

// Simple BFS example for an undirected graph with nodes 0..6

void bfs(int start, const vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";

        for (int nei : adj[node]) {
            if (!visited[nei]) {
                visited[nei] = true;
                q.push(nei);
            }
        }
    }
}

int main() {
    const int n = 7; // nodes 0,1,2,3,4,5,6
    vector<vector<int>> adj(n);

    // Example edges (undirected)
    auto addEdge = [&](int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    };

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 5);
    addEdge(2, 6);

    // Optional: sort adjacency lists for deterministic traversal order
    for (int i = 0; i < n; ++i) sort(adj[i].begin(), adj[i].end());

    vector<bool> visited(n, false);

    cout << "BFS traversal starting from node 0: ";
    bfs(0, adj, visited);
    cout << endl;

    return 0;
}
