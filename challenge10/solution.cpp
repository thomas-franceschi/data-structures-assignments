// Challenge 10: Minimum Spanning Tree
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>

using namespace std;

struct edge {
    int cost;
    int name;
    int prev;
};

//overload priority queue
bool operator<(edge x, edge y){
    return x.cost > y.cost;
}

int getTotalWeight( vector< vector<int> > graph, multimap< int, int > mst){
    int sum = 0;
    for( auto it = mst.begin(); it != mst.end(); it++ ){
        sum += graph[it->first][it->second];
    }
    return sum;
}

multimap<int, int> primsAlg( vector< vector<int> > graph){
    map <int, int> marked;
    priority_queue<edge> frontier;
    edge v;
    frontier.push({0, 0, 0});

     while(!frontier.empty()){
        v = frontier.top();
        frontier.pop();
        
        if (marked.find(v.name) != marked.end()) continue;
        
        marked[v.name] = v.prev;

        for(int i = 0; i < graph[v.name].size(); i++){
            if( graph[v.name][i] != -1) frontier.push({ graph[v.name][i], i, v.name });
        }
     }
     
     
     multimap< int, int > mst;
     //make mst
     
     for(auto it = marked.begin(); it != marked.end(); it++){
         if( it->first > it->second) mst.insert(pair<int,int>(it->second, it->first));
         else mst.insert( pair<int,int>(it->first, it->second));
     }
     auto it = mst.begin();
     mst.erase(it);

     return mst;
}

// Main Execution

int main(int argc, char *argv[]) {
     bool first = true;
     int num = 0;
     int temp;
    while( cin >> num ){
        if(!first) cout << endl;
        first = false;
        vector< vector<int> > graph;
        vector<edge> edges;
        graph.resize(num);
        //read in graph
        for( int i = 0; i < num; i++){
            graph[i].resize(num);
            for( int j = 0; j < num; j++){
                cin >> temp;
                graph[i][j] = temp;
            }
        }
        //make edges list
        for( int i = 0; i < num; i++){
            for( int j = 0; j < num; j++){
                if( graph[i][j] != -1 ){
                    edges.push_back({graph[i][j], i, j});
                }
            }
        }

        //generate mst
        multimap<int, int> mst = primsAlg(graph);
        //get sum
        int sum = 0;
        sum = getTotalWeight( graph, mst);

        cout << sum << endl;
        for( auto it = mst.begin(); it != mst.end(); it++){
            cout << char(it->first + 'A') << char(it->second+'A') << endl;
        }
    }
    
    return EXIT_SUCCESS;
}