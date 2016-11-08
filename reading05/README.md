Reading 05
==========
1. A binary heap stores its nodes in a complete binary tree and the children 
nodes are either greater than or less than their parent nodes. A binary 
search tree inserts children that are less than the parent on the left, 
and greater than the parent on the right. A binary search tree does not 
need to be complete. A binary tree consisting of at least 2 nodes (not 
including the root) cannot be both a binary heap and binary search tree 
because if both numbers are less than the root they would still be on the 
same level, but in a BST one would be the child of the other.

2. Given a binary search tree, I would print all of the values in sorted 
order by traversing it in-order. That is, I would start at the left sub 
tree and the far left leaf, then recursively check for children, printing 
all of the leaves and then their parents subsequently until I reached the 
root, print the root, then repeat the process with the right sub tree.

3. 
1: Search
    Average case: log(n)
    Worst Case: n
2: Insert
    Average Case: log(n)
    Worst Case: n
3: Remove
    Average Case: log(n)
    Worst Case: n

4. B-Trees are different from binary searchtrees in that each node can 
have more than 2 children and each node can hold more than one value. This 
allows for trees that are much shallower but contain far more data. 