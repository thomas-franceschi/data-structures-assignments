Reading 06
==========
 1. Rotation inverts the child=parent relaitonship. During a left-rotation 
 the left child of the parent node is swapped with the parent, and if it has children then 
 the left and right are unaffected but the middle child must be reconnected to the new parent.


 2. The three invariants are that the root node must be black, no path 
 can have two red nodes in a row, and every path must have the same 
 number of black nodes.

3. A treap is a binary tree because it utilizes a key system that 
organizes the nodes numerically according to the key value that is 
paired with a random number value. Nodes are inserted accoriding to their 
key value. An in order traversal produces thenodes in sorted key order. 
A treap is a binary heap because it is a requirement that it be heap-ordered 
in that any parent must be greater than or equalto its children.

4. 
Red-Black Trees:
Search:
    -Average Case: log n
    -Worst Case: log n
Insert:
    -Average Case: log n
    -Worst Case: log n
Remove:
    -Average Case: log n
    -Worst Case: log n

Treaps:
Search:
    -Average Case: log n
    -Worst Case: n
Insert:
    -Average Case: log n
    -Worst Case: n
Remove:
    -Average Case: log n
    -Worst Case: n