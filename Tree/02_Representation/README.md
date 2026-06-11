# Tree Representation

## Goal

Store a tree efficiently so that we can traverse it using DFS or BFS.

---

## Adjacency List

In Competitive Programming, trees are usually represented using an adjacency list.

```cpp
vector<int> adj[N];
```

or

```cpp
vector<int> adj[n + 1];
```

where:

```text
adj[i] = list of nodes connected to i
```

---

## Example Tree

```text
    1
   / \
  2   3
 / \
4   5
```

Edges:

```text
1 2
1 3
2 4
2 5
```

---

## Building the Adjacency List

For every edge (u, v):

```cpp
adj[u].push_back(v);
adj[v].push_back(u);
```

Why both directions?

Because a tree is usually an undirected graph.

---

## Adjacency List for the Example

```text
adj[1] = {2, 3}
adj[2] = {1, 4, 5}
adj[3] = {1}
adj[4] = {2}
adj[5] = {2}
```

---

## CP Input Format

```text
5
1 2
1 3
2 4
2 5
```

Meaning:

```text
N = 5
Edges = 4 (N - 1)
```

---

## Code Template

```cpp
int n;
cin >> n;

vector<int> adj[n + 1];

for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
}
```

---

## Time Complexity

Building adjacency list:

```text
O(N)
```

because a tree contains:

```text
N - 1 edges
```

---

## Quick Revision

```text
Tree → Stored using Adjacency List

adj[i]
→ Stores all neighbors of node i

For edge (u, v):

adj[u].push_back(v);
adj[v].push_back(u);

Tree with N nodes:
Edges = N - 1
```
