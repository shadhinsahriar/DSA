/*
========================================
        CONNECTED COMPONENTS
========================================

Algorithm:
- DFS (Depth First Search)

Concept:
- A connected component is a group of
  nodes where every node is reachable
  from every other node.

Approach:
- Traverse every node from 1 -> n
- If a node is not visited:
    -> it belongs to a new component
    -> run DFS from that node
    -> increase component counter

Time Complexity:
- O(V + E)

Author:
- Shadhin Sahriar
========================================
*/

#include <iostream>
#include <vector>
using namespace std;

const int N = 100005;

// graph[i] stores all neighbors of node i
vector<int> graph[N];

// visited[i] = true means node i already visited
bool visited[N];

/*
----------------------------------------
    DFS FUNCTION
----------------------------------------

Purpose:
- Visit all nodes of a connected component
*/

void dfs(int node) {

    // Mark current node as visited
    visited[node] = true;

    // Visit all neighbors of current node
    for(int neighbor : graph[node]) {

        // If neighbor is not visited,
        // go deeper using DFS
        if(!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    /*
    ------------------------------------
        GRAPH INPUT
    ------------------------------------

    Input Format:
    u v

    Since the graph is undirected:
    u <-> v
    */

    for(int i = 0; i < m; i++) {

        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int components = 0;

    /*
    ------------------------------------
        COUNT CONNECTED COMPONENTS
    ------------------------------------
    */

    for(int i = 1; i <= n; i++) {

        // New component found
        if(!visited[i]) {

            components++;

            cout << "Component starts from: "
                 << i << endl;

            // Traverse entire component
            dfs(i);
        }
    }

    cout << "\nTotal Connected Components: "
         << components << endl;

    return 0;
}
