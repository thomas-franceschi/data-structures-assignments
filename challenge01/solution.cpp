// Challenge 01: Rotating Arrays

// Main Execution


//Thomas Franceschi
//Challenge 01

#include <iostream>
#include <vector>



using namespace std;

int main(int argc, char *argv[]) {
    vector<char> instructions;
    int size;
    int shift;
    int vecValue;
    char dir;
    //Vector to be rotated
    vector<int> myVector;
    for ( int test = 0; test < 12; test++){
        //cout << "Size of Vector - Shift # - Direction (L/R)" << endl;;
        cin >> size >> shift >> dir;

        //cout << "size: " << size << endl << "shift: " << shift << endl << "Direction: " << dir << endl;

        for ( int i = 0; i < size; i++) {
            cin >> vecValue;
            myVector.push_back(vecValue);
        }

    //Left Rotate
    if ( dir == 'L' || dir == 'l') {

        for (int k = 0; k < shift; k++) {
                //Rotate vector once
                for (int j = 0; j < size - 1; j++) {

                    swap( myVector[j], myVector[j+1] );

                    
                }
            }
        }

        //Right Rotate
    if ( dir == 'R' || dir == 'r') {

        for (int k = 0; k < shift; k++) {
                //Rotate vector once
                for (int j = size - 1; j > 0; j--) {

                    swap( myVector[j], myVector[j-1] );

                }
            }
        }
        //print output
        for ( int z = 0; z < size; z++) {
            cout << myVector[z];
            if ( z != (size - 1)) cout << ' ';
        }
        cout << endl;

        //clear vector
        myVector.clear();
}

}
