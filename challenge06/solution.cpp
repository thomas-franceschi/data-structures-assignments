// Challenge 06: Lowest Common Ancestor
#include <iostream>
#include "btree.cpp"

using namespace std;

// Main Execution

int main(int argc, char *argv[]) {

    btree tree;

    tree.insert( tree.root, 3 );
    tree.insert( tree.root, 2 );
    tree.insert( tree.root, 1 );
    tree.insert( tree.root, 4 );
    tree.insert( tree.root, 5 );
    tree.insert( tree.root, 6 );

    Node* LCA = tree.FindLowestCommonAncestor( tree.root, 1, 5);
    cout << LCA->data;
    
    return EXIT_SUCCESS;
}
