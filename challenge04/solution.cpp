// Challenge 04: Card Rank
// Thomas Franceschi

#include <cstdlib>
#include <map>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Main Execution
int main(int argc, char *argv[]) {

    //intitialize variables
    int n = 0, count = 0;
    double val;
    string num;
    string name;
    char suit;
    map<double, string> players;

    //check for sentinel value
    while( n >= 0 ){

        //read in number of players
        cin >> n;

        //read in player information
        for ( int i = 0; i < n; i++){

            //read in values
            cin >> name >> num >> suit;

            //convert face cards to number values
            if ( num == "A" ) num = "14";
            if ( num == "J" ) num = "11";
            if ( num == "Q" ) num = "12";
            if ( num == "K" ) num = "13";
            
            //convert card value from string to number
            val = stod(num);

            //add suit to value
            switch (suit) {
            case 'C':
                val+=0.1;
                break;
            case 'D':
                val+=0.2;
                break;
            case 'H':
                val+=0.3;
                break;
            case 'S':
                val+=0.4;
                break;
            default:
                break;
            }
            
            //add to map (auto sorts entries)
            players[val] = name;

        }

        //print in descending order (from back of map)
        typedef map<double, string>::reverse_iterator MapIterator;
        for (MapIterator it = players.rbegin(); it != players.rend(); it++){
            if ( it != players.rbegin() ) cout << ", ";
            cout << it->second;
        }
        
        //print new line if not last entry
        if( count < n - 1) cout << endl;

        //clear deck
        players.clear();

        //increment counter
        count++;
    }
    return EXIT_SUCCESS;
}