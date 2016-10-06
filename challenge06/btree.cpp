#include <iostream>

struct Node {
  int data;
  Node *left;
  Node *right;
};

class btree {
    public:
        btree():root(nullptr){}
        ~btree();
        void insert(Node *root, int val);
        Node *FindLowestCommonAncestor( Node *root, int val1, int val2);
        Node *root;
        
};

void btree::insert( Node *root, int val) {
    Node* curr = root;
    //If no root, create one
    if (curr == nullptr) {
        curr = new Node{val, nullptr, nullptr};
    }
    
    //check if value belongs in left sub tree
    else if (curr->data >= val) {
        insert(curr->left, val);
    }
    //check if in right sub tree
    else {
        insert(curr->right, val);
    }
}

btree::~btree () {
    root = nullptr;
}

Node *btree::FindLowestCommonAncestor( Node *root, int val1, int val2){
    Node *curr = root;
    while( curr != nullptr){
        //check left sub tree
        if( val1 <= curr->data && val2<= curr->data) curr = curr->left;
        //check right sub tree
        else if (val1 > curr->data && val2 > curr->data) curr = curr->right;
        //return where they diverge
        else return curr;
    }
    return curr;
}