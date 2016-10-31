// Challenge 08: Palindrome Permutation
//Thomas Franceschi

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

//Functions

bool is_palindrome( string s){
    unordered_map<char, int> map;
    int numOdd = 0;
    //Read string into unordered map
    for ( size_t i = 0; i < s.length(); i++){
        map[s[i]]++;
    }
    //count number of occurences of each character
    for( const auto& n : map ) {
        if ((n.second % 2) == 1) numOdd++;
    }
    //if only 1 char appears once or less then true
    if (numOdd <= 1) return true;
    else return false;
}

string sanitize( string s){
    string newString;
    //If char is letter, add to new string
    for ( size_t i = 0; i < s.length(); i++){
        char c = tolower(s[i]);
        if (isalpha(s[i])) newString = newString + c;
    }
    //Return new string
    return newString;
}

// Main Execution

int main(int argc, char *argv[]) {
    string temp;
    //Read in strings
    while( getline(cin, temp) ){
        //Remove non characters
        string myString = sanitize(temp);
        //Check if palindrome
        if( is_palindrome( myString )) cout << "\"" << temp << "\"" << " is a palindrome permutation" << endl;
        else cout << "\"" << temp << "\"" << " is not a palindrome permutation" << endl;
        //cout << myString << endl;
    }
    return EXIT_SUCCESS;
}