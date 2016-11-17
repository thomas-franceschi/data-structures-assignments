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
    int prev;
    int vert;
};

//overload priority queue
bool operator<(edge x, edge y){
    return x.cost > y.cost;
}

int getTotalWeight( vector< vector<int> > mst){
    int sum = 0;
    for( size_t i = 0; i < mst.size(); i++){
        for( size_t j = 0; j < mst[i].size(); j++){
            if(mst[i][j] != -1 ) sum += mst[i][j];
        }
    }
    return sum;
}

map<int, int> primsAlg( vector< vector<int> > graph){
    map <int, int> marked;
    priority_queue<edge> frontier;
    edge v;
    frontier.push({0, 0, 0});

     while(!frontier.empty()){
        v = frontier.top();
        frontier.pop();
        
        if (marked.find(v.prev) != marked.end()) continue;
        
        marked[v.vert] = v.prev;

        for(int i = 0; i < graph[v.prev].size(); i++){
            if( graph[v.prev][i] != -1) frontier.push({ graph[v.prev][i], v.prev, i });
        }
     }
     
     return marked;
}

// Main Execution

int main(int argc, char *argv[]) {
     int num = 0;
     int temp;
    while( cin >> num ){
        vector< vector<int> > graph;
        vector<edge> edges;
        graph.resize(num);
        //read in graph
        for( int i = 0; i < num; i++){
            graph[i].resize(num);
            for( int j = 0; j < num; j++){
                cin >> temp;
                graph[i][j] = temp;
                //cout << graph[i][j] << " " ;
            }
            //cout << endl;
        }
        //make edges list
        for( int i = 0; i < num; i++){
            for( int j = 0; j < num; j++){
                if( graph[i][j] != -1 ){
                    edges.push_back({graph[i][j], i, j});
                }
            }
        }
        /*
        for(int i = 0; i < edges.size(); i++){
            cout << "(" << edges[i].cost << ", " << edges[i].vert << ", " << edges[i].prev << ")" << endl;
        }
        cout << endl;
        */
        //generate mst
        map<int, int> mst = primsAlg(graph);
        for( auto it = mst.begin(); it != mst.end(); it++){
            cout << it->first << " " << it->second << endl;
        }
        //find sum of mst
        //cout << "Sum: " << getTotalWeight(mst) << endl; 
        //
    }
    
    return EXIT_SUCCESS;
}