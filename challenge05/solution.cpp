// Challenge 05: BST

#include <cstdlib>
#include <iostream>

using namespace std;

int isBST( int tree[], int num, int counter );

// Main Execution

int main(int argc, char *argv[]) {

    for ( int j = 0; j < 7; j++) {
        int num = 0;
        int temp = 0;
        int count = 1;
        
        cin >> num;
        int newNum = (num * 2) + 2;
        int tree[newNum];

        for (int i = 0; i < num; i++)
        {   
            cin >> temp;
            tree[i] = temp;
        }
        for ( int fill = num; fill < newNum; fill++ ){
            tree[fill] = -1;
        }
        if (isBST(tree, num, count)) cout << "Tree " << j + 1 << " is a BST" << endl;
        else cout << "Tree " << j + 1 << " is not a BST" << endl;

    }
    return EXIT_SUCCESS;
}

int isBST( int tree[], int num, int counter ){
    
    //cout << tree[counter - 1] << ' ' << tree[(counter * 2) - 1] << ' ' << tree[counter * 2] << endl;
    //base case
    if ( counter > num ) return 1;
    if ( counter * 2 > num && (counter * 2) + 1 > num) return 1;

    //conditions
    if (tree[(counter * 2) - 1] == -1) {}
    else if ( tree[counter - 1] < tree[(counter * 2) - 1]) return 0;

    if(tree[counter * 2] == -1) {}
    else if ( tree[counter - 1] >= tree[(counter * 2)]) return 0;

    //recursion
    else isBST( tree, num, counter + 1);
    
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
