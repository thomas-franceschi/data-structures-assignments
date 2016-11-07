Reading 09
==========
1)
    A. connected    - A graph is connected if there is at least one path from any vertex to another.
    B. acyclic      - A graph is acyclic if it does not contain cycles.
    C. Directed     - A graph is directed if the edges are directed from one vertex to another.
    D. Simple       - A graph is simple if all the vertices along apath are unique.
    E. Weighted     - A graph is weighted if there is a numerical value (weight) associated with each edge.

2)
    A.
        Graph 0 - Adjacency Matrix            Graph 0 - Adjacency List

            A B C
        A: 0 1 1                                A: B C
        B: 0 0 0                                B:
        C: 0 1 0                                C: B

        Graph 1 - Adjacency Matrix            Graph 1 - Adjacency List

            A B C D
        A: 0 1 0 1                              A: B D
        B: 1 0 0 0                              B: A
        C: 1 0 0 0                              C: A
        D: 0 1 1 1                              D: B C D

        Graph 2 - Adjacency Matrix            Graph 2 - Adjacency List

            A B C D
        A: 0 1 1 1                              A: B C D
        B: 1 0 1 1                              B: A C D
        C: 1 1 0 1                              C: A B D
        D: 1 1 1 0                              D: A B C

        Graph 3 - Adjacency Matrix            Graph 3 - Adjacency List

            A B C D
        A: 0 0 0 0                              A:
        B: 0 0 0 1                              B: D
        C: 0 0 0 1                              C: D
        D: 0 1 1 0                              D: B C
    
    B.
        You would use an adjacency matrix to represent a graph instead of an adjacency list when the graph is fairly dense with edges 
        due to the lack of overhead from storing pointers and since it uses space for every potential edge, as the # of nodes approaches 
        the max # of nodes in a graph it becomes more efficient.

    C.
        You would use an adjacency list to represent a graph when the amount of edges is sparse because of the reduced overhead of only 
        storing used edges and not theoretical ones as well.
3)
    A. 
    struct Graph {
    map<string, set<string>> adj; // Adjacency List/Set
    };

    void traversal(Graph &g, const string &s) {
        stack<string> q;
        set<string>   v;

        q.push(s);

        while (!q.empty()) {

            s = q.pop();

            if ( v.find(s) != v.end() ) continue;

            v.insert(s);

            for (auto i : g.edges ) q.push(i);
        }
    }

    B.
        stack<string> q; tracks all of the "current" nodes adjacent to the last one to be proccessed next.

    C.
        set<string> v; tracks all of the nodes that have been visited so far.

    D.
        To perform a breadth-first search we would have to replace the stack in q with a queue.