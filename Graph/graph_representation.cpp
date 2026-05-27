/*
========================================
    GRAPH INPUT & OUTPUT TEMPLATE
========================================

This file contains:

1. Undirected Unweighted Graph
2. Directed Unweighted Graph
3. Undirected Weighted Graph
4. Directed Weighted Graph

Graph Representation:
- Adjacency List

Language:
- C++

Author:
- Shadhin Sahriar
========================================
*/

#include <iostream>
#include <vector>
using namespace std;

const int N = 100005;

/*
--------------------------------------------------
    1. UNDIRECTED UNWEIGHTED GRAPH
--------------------------------------------------

Example:
1 -- 2
|    |
3 -- 4

Storage:
graph[u] stores all neighbors of u
*/

vector<int> undirected_unweighted[N];

/*
--------------------------------------------------
    2. DIRECTED UNWEIGHTED GRAPH
--------------------------------------------------

Example:
1 -> 2
1 -> 3

Storage:
graph[u] stores all outgoing neighbors of u
*/

vector<int> directed_unweighted[N];

/*
--------------------------------------------------
    3. UNDIRECTED WEIGHTED GRAPH
--------------------------------------------------

Example:
1 --(5)-- 2

Storage:
{neighbor, weight}
*/

vector<pair<int, int>> undirected_weighted[N];

/*
--------------------------------------------------
    4. DIRECTED WEIGHTED GRAPH
--------------------------------------------------

Example:
1 --(7)--> 2
*/

vector<pair<int, int>> directed_weighted[N];

int main() {

    /*
    ========================================
        UNDIRECTED UNWEIGHTED GRAPH INPUT
    ========================================
    */

    int n, m;
    cin >> n >> m;

    // Input:
    // u v

    for(int i = 0; i < m; i++) {

        int u, v;
        cin >> u >> v;

        // Since graph is undirected,
        // connection goes both ways

        undirected_unweighted[u].push_back(v);
        undirected_unweighted[v].push_back(u);
    }

    cout << "Undirected Unweighted Graph:\n";

    for(int i = 1; i <= n; i++) {

        cout << i << " : ";

        // Print all neighbors of node i

        for(int neighbor : undirected_unweighted[i]) {
            cout << neighbor << " ";
        }

        cout << endl;
    }

    cout << endl;

    /*
    ========================================
        DIRECTED UNWEIGHTED GRAPH INPUT
    ========================================
    */

    int n2, m2;
    cin >> n2 >> m2;

    // Input:
    // u v

    for(int i = 0; i < m2; i++) {

        int u, v;
        cin >> u >> v;

        // Direction only from u -> v

        directed_unweighted[u].push_back(v);
    }

    cout << "Directed Unweighted Graph:\n";

    for(int i = 1; i <= n2; i++) {

        cout << i << " : ";

        for(int neighbor : directed_unweighted[i]) {
            cout << neighbor << " ";
        }

        cout << endl;
    }

    cout << endl;

    /*
    ========================================
        UNDIRECTED WEIGHTED GRAPH INPUT
    ========================================
    */

    int n3, m3;
    cin >> n3 >> m3;

    // Input:
    // u v w

    for(int i = 0; i < m3; i++) {

        int u, v, w;
        cin >> u >> v >> w;

        // Both directions with weight

        undirected_weighted[u].push_back({v, w});
        undirected_weighted[v].push_back({u, w});
    }

    cout << "Undirected Weighted Graph:\n";

    for(int i = 1; i <= n3; i++) {

        cout << i << " : ";

        for(auto x : undirected_weighted[i]) {

            int neighbor = x.first;
            int weight = x.second;

            cout << "(" << neighbor << ", " << weight << ") ";
        }

        cout << endl;
    }

    cout << endl;

    /*
    ========================================
        DIRECTED WEIGHTED GRAPH INPUT
    ========================================
    */

    int n4, m4;
    cin >> n4 >> m4;

    // Input:
    // u v w

    for(int i = 0; i < m4; i++) {

        int u, v, w;
        cin >> u >> v >> w;

        // Direction only u -> v

        directed_weighted[u].push_back({v, w});
    }

    cout << "Directed Weighted Graph:\n";

    for(int i = 1; i <= n4; i++) {

        cout << i << " : ";

        for(auto x : directed_weighted[i]) {

            int neighbor = x.first;
            int weight = x.second;

            cout << "(" << neighbor << ", " << weight << ") ";
        }

        cout << endl;
    }

    return 0;
}
