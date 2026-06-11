#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100005];
int depth[100005];

void dfs(int node, int parent) {
    for (int child : adj[node]) {

        // Don't go back to the parent
        if (child == parent)
            continue;

        // Child is one level deeper than parent
        depth[child] = depth[node] + 1;

        dfs(child, node);
    }
}

int main() {
    int n;
    cin >> n;

    // Read the tree
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Root = 1
    depth[1] = 0;

    dfs(1, 0);

    // Print depth of every node
    for (int node = 1; node <= n; node++) {
        cout << "depth[" << node << "] = "
             << depth[node] << '\n';
    }

    return 0;
}