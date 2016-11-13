// Challenge 07: Linked List Deduplication
//Thomas Franceschi

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

// Structures
struct Node {
  int data;
  Node *next;
};

void deduplicate( Node *&head );

// Main Execution

int main(int argc, char *argv[]) {
    for ( int count = 0; count < 6; count++){

        //Declare Variables
        int num;
        int temp;
        Node *head = nullptr;
        Node *curr = nullptr;
        Node *next = nullptr;

        //Read in number of members
        cin >> num;

        //Read in members
        for ( int i = 0; i < num; i++){
            cin >> temp;
            
            //check if head
            if (i == 0) {
                curr = new Node;
                curr->data = temp;
                curr->next = nullptr;
                head = curr;
            }
            //Insert new node
            else{
            curr->next = new Node;
            curr->next->data = temp;
            curr->next->next = nullptr;
            curr = curr->next;
            }
            
            
        }

        deduplicate( *&head );

        //Print nodes
        curr = head;
        while(curr != nullptr){
            cout << curr->data;
            curr = curr->next;
        }

        cout << endl;

        //clear list
        curr = head;
        while( curr != nullptr ){
            next = curr->next;
            delete curr;
            curr = next;
        }
    }

    return EXIT_SUCCESS;
}

void deduplicate( Node *&head ) {

    Node *curr = head;
    Node *prev = head;
    Node *next = nullptr;
    unordered_set<int> elements;

     //insert into unordered set
        while(curr != nullptr){
            elements.insert(curr->data);
            curr = curr->next;
        }

        //compare set to list
        while(curr){
            next = curr->next;

            //If element is in set remove from set
            if (elements.find(curr->data) != elements.end()) {
                elements.erase(curr->data);
                prev = curr;
                curr = curr->next;
            }

            //If element is not in set, remove from linked list
            else{
                prev->next = curr->next;
                curr->next = nullptr;
                delete curr;
                curr = prev->next;
            }
        }
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
