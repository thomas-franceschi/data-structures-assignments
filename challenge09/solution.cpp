// Challenge 09: Graph Paths
//Thomas Franceschi

#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <map>

using namespace std;
typedef map< int, vector<int> > Graph;

bool canReach( int src, int dest, Graph myGraph){
    stack<int> frontier;
    set<int> marked;
    frontier.push(src);

    while(!frontier.empty()){
        src = frontier.top();
        frontier.pop();
        
        if (marked.find(src) != marked.end()) continue;
        if ( src == dest ) return true;
        marked.insert(src);

        Graph::iterator it = myGraph.find(src);
        for(const int& i : it->second){
            frontier.push(i);
        }   
    }
    return false;
}

//Main Execution

int main(int argc, char *argv[]) {
    //Initialize variables
    int num = 0;
    int numPaths = 0;
    char src, dest;
    int count = 1;

    while (cin >> num){
        if( count != 1) cout << endl; //Handle newlines
        
        //Initialize Graph
        Graph myGraph;

        //Read in elements
        for( int i = 0; i < num; i++){
            cin >> src >> dest;
            src = src - 'A';
            dest = dest - 'A';
            myGraph[dest];
            myGraph[src].push_back(dest);
        }

        cin >> numPaths;

        //Read in paths
        for (int i = 0; i < numPaths; i++){
            cin >> src >> dest;
            char srcNum = src - 'A';
            char destNum = dest - 'A';

            //Check if can be reached
            if ( canReach( srcNum, destNum, myGraph)) cout << "In Graph " << count << " there is a path from " << src << " to " << dest << endl;
            //Else no connection
            else cout << "In Graph " << count << " there is no path from " << src << " to " << dest << endl;
        }
        count++;
    }
    return EXIT_SUCCESS;
}