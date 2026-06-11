# DFS (Depth First Search)

## Goal

Visit every node in the tree exactly once.

---

## Idea

DFS goes as deep as possible before coming back.

Example:

```text
    1
   / \
  2   3
 / \
4   5
```

Possible DFS order:

```text
1 2 4 5 3
```

---

## DFS Function

```cpp
void dfs(int node, int parent)
```

Parameters:

```text
node   -> current node
parent -> node from which we came
```

---

## Why Parent?

Tree edges are stored in both directions.

Example:

```text
1 <-> 2
```

While at node 2, we can see node 1 again.

To avoid going back:

```cpp
if (child == parent) continue;
```

---

## DFS Skeleton

```cpp
void dfs(int node, int parent) {

    // Process current node

    for (int child : adj[node]) {

        if (child == parent)
            continue;

        dfs(child, node);
    }
}
```

---

## Example Traversal

Tree:

```text
    1
   / \
  2   3
 / \
4   5
```

Starting:

```cpp
dfs(1, 0);
```

Order:

```text
1
2
4
5
3
```

---

## Time Complexity

```text
O(N)
```

Every node is visited once.

---

## Quick Revision

```text
DFS = Depth First Search

Go deep first, then backtrack

dfs(node, parent)

if (child == parent)
    continue;

Time Complexity = O(N)
```
