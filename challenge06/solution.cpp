// Challenge 06: Lowest Common Ancestor
#include <iostream>
//#include "btree.cpp"

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};


void insert (Node *&root, int val);
void clear( Node *root);
Node * FindLowestCommonAncestor( Node *root, int val1, int val2);
// Main Execution

int main(int argc, char *argv[]) {
    bool isFirst = true;
    while( 1 ){
        int n;
        int pairs;
        int val;
        int val1, val2;
       
        Node *root = nullptr;
        cin >> n;
        if ( n == -1) return EXIT_SUCCESS;

        //Build tree
        for (int i = 0; i < n; i++){
            cin >> val;
            insert( root, val );
        } 

        cin >> pairs;
        if( !isFirst ) {
            cout << endl;
        }
        //find LCA
        for (int j = 0; j < pairs; j++){
            cin >> val1 >> val2;
            Node* LCA = FindLowestCommonAncestor( root, val1, val2);
            cout << LCA->data << endl;
        }
        isFirst = false;
        clear( root );
        
    }
}

void insert( Node *&curr, int val){
    //If no root, make one
        if (curr == nullptr) {
            curr = new Node;
            curr->data = val;
            curr->left = nullptr;
            curr->right = nullptr;
            return;
        }
        //if (root == nullptr) root = curr;
        //check if value belongs in left sub tree
        else if (curr->data >= val) {
            insert(curr->left, val);
        }
        //check if in right sub tree
        else {
            insert(curr->right, val);
        }
}

void clear( Node *curr ){

    if(curr->left != nullptr) clear(curr->left);
    if(curr->right != nullptr) clear(curr->right);
    delete curr;

}

Node *FindLowestCommonAncestor( Node *curr, int val1, int val2){
    while( curr != nullptr){
        if ( val1 == curr->data || val2 == curr->data) return curr;
        //check left sub tree
        if( val1 <= curr->data && val2<= curr->data) curr = curr->left;
        //check right sub tree
        else if (val1 > curr->data && val2 > curr->data) curr = curr->right;
        //return where they diverge
        else return curr;
    }
    return curr;
}