/*
========================================
    LARGEST CONNECTED COMPONENT
========================================

Algorithm:
- DFS (Depth First Search)

Concept:
- A connected component is a group of
  connected nodes.

Goal:
- Find the size of the largest
  connected component.

Approach:
- Run DFS for every unvisited node
- Count nodes inside current component
- Keep track of maximum size

Time Complexity:
- O(V + E)

Author:
- Shadhin Sahriar
========================================
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 100005;

// graph[i] stores all neighbors of node i
vector<int> graph[N];

// visited[i] = true means node i already visited
bool visited[N];

// Stores current component size
int cnt = 0;

/*
----------------------------------------
            DFS FUNCTION
----------------------------------------

Purpose:
- Traverse entire connected component
- Count total nodes in that component
*/

void dfs(int node) {

    // Mark current node as visited
    visited[node] = true;

    // Count current node
    cnt++;

    // Visit all neighbors
    for(int neighbor : graph[node]) {

        // Go deeper if not visited
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

    Input:
    u v

    Undirected Graph:
    u <-> v
    */

    for(int i = 0; i < m; i++) {

        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int largest_component = 0;

    /*
    ------------------------------------
        FIND LARGEST COMPONENT
    ------------------------------------
    */

    for(int i = 1; i <= n; i++) {

        // New component found
        if(!visited[i]) {

            // Reset current component size
            cnt = 0;

            // Traverse component
            dfs(i);

            // Update maximum component size
            largest_component =
                max(largest_component, cnt);
        }
    }

    cout << "Largest Component Size: "
         << largest_component << endl;

    return 0;
}
