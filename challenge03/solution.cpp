// Challenge 03: Closest Numbers

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

// Main Execution

int main() {

    int num;
    int temp;
    int minDiff;
    int tempDiff;
    vector<int> myVec;
    vector<int> pairs;

    for( int test = 0; test < 9; test++){
        //read in number of integers
        cin >> num;

        //read in integers
        for( int n = 0; n < num; n++){
            cin >> temp;
            myVec.push_back(temp);
        }

        //sort list
        sort(myVec.begin(), myVec.end());

        //compare
        minDiff = myVec[ 1 ] - myVec[ 0 ];
        for ( unsigned int i = 0; i < myVec.size() - 1; i++ ){
            //set diff
            tempDiff = myVec[ i + 1 ] - myVec[ i ];

            //both positive or both negative
            if( tempDiff < minDiff) {
                pairs.clear();
                pairs.push_back(myVec[i]);
                pairs.push_back(myVec[i+1]);
                minDiff = tempDiff;
            }
            else if (tempDiff == minDiff) {
                pairs.push_back(myVec[i]);
                pairs.push_back(myVec[i+1]); 
            }

        }
        

        for ( unsigned int j = 0; j < pairs.size(); j++){
            cout << pairs[j];
            if ( j != pairs.size() - 1) cout << ' ';
        }

            cout << endl;
            pairs.clear();
            myVec.clear();
    }
    return EXIT_SUCCESS;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
