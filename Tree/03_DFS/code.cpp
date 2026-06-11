#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100005];

void dfs(int node, int parent) {
    cout << node << " ";

    for (int child : adj[node]) {
        if (child == parent)
            continue;

        dfs(child, node);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    return 0;
}