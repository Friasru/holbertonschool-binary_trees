# C - Binary Trees

- **Project Type**: Team project (2 people)

## What is a Binary Tree?

A binary tree is a data structure that organizes data, like a family tree. Each element in the tree is called a **node**, and each node can have at most two children.

### Key Concepts

- **Root**: The topmost node in the tree
- **Parent**: A node that has child nodes below it
- **Child**: A node connected to another node above it
- **Left Child**: The child node on the left branch
- **Right Child**: The child node on the right branch
- **Leaf**: A node with no children
- **Height**: The distance from a node to the furthest leaf below it
- **Depth**: The distance from the root to a specific node

### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
