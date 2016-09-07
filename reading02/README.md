Reading 02
==========

1. 
The maximum height of a binary tree is O(n)
The minimum height of a binary tree is O(log n)

2. 
  0   1   2   3   4   5   6   7
[ R | O | G | U | E | O | N | E ]

An array based binary tree is beneficial when it is a complete binary 
tree and each node stores a simple value. It helps reduce overhead and 
there are simple formulas that can be used to find a node's corresponding 
place in the array, eliminating the need for pointers. 

3. 
Breadth-first:
W, Y, R, D, B, I, O, F, U, L, A, R, A, E, D

I would use a queue to perform this traversal by adding every node 
from a node level to it until there are no nodes left on that level. 
then pop the first node and traverse its leafs, then repeat with every 
node on tht level and do this recursively until I hit the leaves.

Depth-First (Pre-Order):
W, Y, D, F, U, B, L, A, R, I, R, A, O, E, D

I would use a stack for this type of search recursively to store the nodes. 

4. 
struct Node {
    int          value;
    unique_ptr<Node> left;
    unique_ptr<Node> right;
};

Smart pointers are beneficial in a binary-tree because it allows nodes to be 
easily moved and reorganized for balancing, addition, and removal. It also 
keeps track so that ndoes that are removed are automatically deleted from 
memory.