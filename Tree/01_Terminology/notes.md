# Tree Terminology

## What is a Tree?

A tree is a connected graph with:

* N nodes
* N - 1 edges
* No cycles

---

## Root

The node from which the tree is viewed.

Example:

```text
    1
   / \
  2   3
```

Root = 1

---

## Parent

The node directly above another node.

Example:

```text
Parent(2) = 1
Parent(3) = 1
```

---

## Child

The node directly below another node.

Example:

```text
Children(1) = {2, 3}
```

---

## Leaf Node

A node with no children.

Example:

```text
    1
   / \
  2   3
```

Leaf Nodes = {2, 3}

---

## Depth

Distance from the root to a node.

Example:

```text
    1
   /
  2
 /
3
```

```text
depth(1) = 0
depth(2) = 1
depth(3) = 2
```

Question answered by depth:

> How deep am I from the root?

---

## Height

Distance from a node to its deepest leaf.

Example:

```text
    1
   /
  2
 /
3
```

```text
height(3) = 0
height(2) = 1
height(1) = 2
```

Question answered by height:

> How tall is the subtree below me?

---

## Important Difference

Depth:

```text
Root → Node
```

Height:

```text
Node → Deepest Leaf
```

---

## Tree Properties

For a tree with N nodes:

```text
Number of Edges = N - 1
```

A tree is:

* Connected
* Acyclic (contains no cycle)

---

## Quick Revision

```text
Root      → Starting node
Parent    → Node directly above
Child     → Node directly below
Leaf      → Node with no children
Depth     → Root to Node
Height    → Node to Deepest Leaf
Edges     → N - 1
```
