# Depth Array

## Goal

Find the depth of every node in a tree.

Depth answers:

> How far is a node from the root?

---

## Definition

Depth = Number of edges from the root to the node.

Example:

```text
    1
   / \
  2   3
 / \
4   5
```

```text
depth(1) = 0
depth(2) = 1
depth(3) = 1
depth(4) = 2
depth(5) = 2
```

---

## Main Idea

If we know the depth of a parent, then:

```text
depth(child) = depth(parent) + 1
```

Example:

```text
depth(2) = 1

depth(4) = depth(2) + 1
         = 2
```

---

## Why DFS?

DFS naturally moves:

```text
Parent → Child
```

So while traversing:

```text
depth[child] = depth[node] + 1
```

Then continue DFS.

---

## DFS Flow

Start:

```text
depth[1] = 0
```

Move to node 2:

```text
depth[2] = depth[1] + 1
         = 1
```

Move to node 4:

```text
depth[4] = depth[2] + 1
         = 2
```

Continue similarly for all nodes.

---

## Time Complexity

```text
O(N)
```

Every node is visited once.

---

## Quick Revision

```text
Depth = Distance from Root

depth(root) = 0

depth(child) = depth(parent) + 1

Use DFS to compute depth of all nodes.

Time Complexity = O(N)
```
