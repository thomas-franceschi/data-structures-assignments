// Challenge 02: Adding List-Based Integers

// Main Execution

// linked_list_template.cpp: Singly Linked List (template)

#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

const int NITEMS = 10;

// List declaration ------------------------------------------------------------

template <typename T>
class List {
    protected:
        struct Node {
            T     data;
            Node *next;
        };

        typedef Node * iterator;

        Node *head;

    public:
        List() : head(nullptr) {}  // Leave out and it segfaults
        iterator front() { return head; };

        size_t size() const;
        T& at(const size_t i);
        void insert(iterator it, const T &data);
        void push_back(const T &data);
        void erase(iterator it);
        void clear();
};

// List implementation --------------------------------------------------------

template <typename T>
size_t List<T>::size() const {
    size_t size = 0;

    // Condition can also just be node
    for (Node *node = head; node != nullptr; node = node->next) {
        size++;
    }

    return size;
}

template <typename T>
T& List<T>::at(const size_t i) {
    Node *node = head;
    size_t   n = 0;

    while (n < i && node != nullptr) {
        node = node->next;
        n++;
    }

    if (node != nullptr) {
        return node->data;
    } else {
        throw std::out_of_range("invalid list index");
    }
}

// Post-Condition: New Node is created with specified data value and placed
// after the iterator it.
template <typename T>
void List<T>::insert(iterator it, const T& data) {
    // Handle empty list
    if (head == nullptr && it == nullptr) {
        head = new Node{data, nullptr};
        return;
    }

    if (it == nullptr) {
        throw std::out_of_range("invalid iterator");
    }

    it->next = new Node{data, it->next};
}

// Post-Condition: New Node is create with specified data value and placed at
// the end of the list.
template <typename T>
void List<T>::push_back(const T& data) {
    // Handle empty list
    if (head == nullptr) {
        head = new Node{data, nullptr};
        return;
    }

    Node *curr = head;
    Node *tail = head;

    while (curr) {
        tail = curr;
        curr = curr->next;
    }

    tail->next = new Node{data, nullptr};
}

template <typename T>
void List<T>::erase(iterator it) {
    if (it == nullptr) {
        throw std::out_of_range("invalid iterator");
    }

    if (head == it) {
        head = head->next;
        delete it;
    } else {
        Node *node = head;

        while (node != nullptr && node->next != it) {
            node = node->next;
        }

        if (node == nullptr) {
            throw std::out_of_range("invalid iterator");
        }

        node->next = it->next;
        delete it;
    }
}

template <typename T>
void List<T>::clear(){
    Node* temp;
    while( head ){
        temp = head->next;
        delete head;
        head = temp;
    }
}

// Main execution -------------------------------------------------------------

int main(int argc, char *argv[]) {
    List<int> list1;
    List<int> list2;
    List<int> sum;
    List<int>flippedSum;
    int tempSum;
    int isCarry;
    int biggest;

    string integer1, integer2;
for( int test = 0; test < 11; test++){
    cin >> integer1 >> integer2;

    //cout << integer1 << endl << integer2 << endl;

    //input integer1
    for (int i = integer1.length() - 1; i >= 0; i--)
    {
        list1.push_back(integer1[i] - '0');
    }

    //input integer2
        for (int i = integer2.length() - 1; i >= 0; i--)
    {
        list2.push_back(integer2[i] - '0');
    }

    //find biggest
    biggest = list1.size();
    if ( list2.size() > list1.size() ) biggest = list2.size();

    //sum the two lists
    isCarry = 0;
    for ( int k = 0; k < biggest; k++){
        if( k >= list1.size() ) {
            tempSum = list2.at(k);
        }
        else if( k >= list2.size() ) {
            tempSum = list1.at(k);
        }
        else tempSum = list1.at(k) + list2.at(k);

        if(isCarry == 1){
            tempSum++;
            isCarry = 0;
        }
        //if( k != list1.size() - 1){
            if(tempSum >= 10){
                isCarry = 1;
                tempSum-=10;
            }
       // }
        
        
    sum.push_back( tempSum );
    }

    if( isCarry == 1) sum.push_back(1);

    //flip list
    for (int flip = sum.size() - 1; flip >= 0; flip--)
    {
        flippedSum.push_back(sum.at(flip));
    }

    //print sum
    for (size_t m = 0; m < flippedSum.size(); m++) {
        cout << flippedSum.at(m);
    }
    cout << endl;
    list1.clear();
    list2.clear();
    sum.clear();
    flippedSum.clear();
}
    return 0;
}