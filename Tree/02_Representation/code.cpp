#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Adjacency list
    vector<int> adj[n + 1];

    // Read n-1 edges
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        // Undirected edge
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print adjacency list
    for (int node = 1; node <= n; node++) {
        cout << "adj[" << node << "] = ";

        for (int neighbor : adj[node]) {
            cout << neighbor << " ";
        }

        cout << '\n';
    }

    return 0;
}