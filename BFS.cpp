#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Breadth First Search for an undirected graph
// Nodes: 0, 1, 2, 3, 4, 5, 6

void bfs(int start, const vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n = 7; // Nodes are 0-6
    vector<vector<int>> adj(n);

    // Example edges (edit as needed)
    // For demonstration, let's use a simple tree:
    //        0
    //      / | \
    //     1  2  3
    //        |   \
    //        4    5
    //             |
    //             6
    adj[0] = {1, 2, 3};
    adj[2] = {0, 4};
    adj[3] = {0, 5};
    adj[1] = {0};
    adj[4] = {2};
    adj[5] = {3, 6};
    adj[6] = {5};

    vector<bool> visited(n, false);

    cout << "BFS Traversal starting from node 0: ";
    bfs(0, adj, visited);
    cout << endl;

    return 0;
}
