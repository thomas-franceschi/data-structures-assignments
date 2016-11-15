Reading 10
==========
 1)
    A. A topological sorting is the linear ordering of nodes in a directed graph 
    in a manner that every node is ordered so that for every directed edge from u to v, 
    u comes before v in the ordering. A real world applications is the schedule of tasks for a 
    machine or an assembly line where certain tasks cannto be complete until another one is before it.

    B. A single-source shortest-path is the shortest weighted path from a single vertex of a graph 
    to every other vertex on the graph. A real world application is computer networks where the goal 
    is to find the cheapest path from one computer to every pther one in a network in order to relay data.

    C. A Minimium-Spanning Tree is a Graph is the subset of the edges of a graph where all cycles have 
    been removed and conatines the minimum total possible edge weight. One real world application is 
    finding the shortest set of wires you need to solder to connect terminals on a circuit board.

 2)

    A. A DAG can have multiple Topological orderings if there are two unconnected nodes that both are 
    directed to by the same node and have edges directed at the same node.

    B. Assuming all edges are distinct, a graph can't have more than one single-source shortest path for any 
    given node since it is always the minum distance for each node, and there are never two "shortest" 
    distances between two nodes.

    C. It is not possible to have more than one minimum spanning tree for a graph if every edge is distinct,
    if there are two non-unique edges, then you can have multiple MSTs.

 3)

    A)
    Graph 0: A, C, B, E, D, F
    Graph 1: B, A, D, E, C
    Graph 2: A, B, C, D, E, F
    Graph 3: A, D, C, B, E

    B)
    Graph 0: 
        (A, C)
        (C, B)
        (C, E)
        (D, F)
        (E, D)
    Graph 1:
        (A, C)
    Graph 2: 
        (A, B)
        (A, C)
        (B, D)
        (D, F)
        (D, E)
    Graph 3:
        (A, B)
        (A, C)
        (C, E)

    C)
    Graph 0:
        (A, C)
        (B, C)
        (C, E)
        (D, E)
        (D, F)
    Graph 1:
        (A, B)
        (B, D)
        (D, E)
        (E, C)
    Graph 2:
        (A, B)
        (B, C)
        (C, D)
        (D, E)
        (D, F)
    Graph 3:
        (A, B)
        (B, C)
        (C, E)
        (E, D)