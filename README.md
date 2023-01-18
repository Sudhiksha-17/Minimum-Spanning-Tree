# Minimum-Spanning-Tree
DAA CIA-1


PRIM'S Algo:
     According to this graph, this is a directed graph.
According to the concept, the prims graph wont work on Directed Weighted Graph but in this scenario prims method works because in this graph while using prims method after E node the nodes doesnt go to D node which omits the -5 which satisfies the Prims Method 

DJIKSTRA'S Algo:
  Dijkstra's algorithm is designed for use on graphs with non-negative edge weights, and it finds the shortest path from a single source vertex to all other vertices in the graph. However, it doesn't work on directed graph as it's based on the assumption that the shortest path to a vertex can only be reached by traversing edges with non-negative weights and that the shortest path to a vertex can be determined by relaxing edges in a specific order. This assumption is not always true for directed graphs, where edges can have negative weights, and the shortest path to a vertex may not be determined by relaxing edges in a specific order.
  
Kruskal's Algo:
  Kruskal's algorithm is not applicable to directed weighted graphs because it relies on the property that the graph is undirected. In a directed graph, the edges have a direction, and the minimum spanning tree would be different from an undirected graph. Additionally, Kruskal's algorithm does not take into account the direction of the edges when building the minimum spanning tree, which is essential for directed graphs



I used the C programming language to find the shortest path using PRIMS, KRUSKALS and DIJKSTRAS algorithm as i have experience in doing a few algorithms in C and also have been using C language for some time for all coding.



# OUTPUT:

## Prim's
<img width="539" alt="p1" src="https://user-images.githubusercontent.com/63871993/213141000-2097ad48-6a03-46f0-a1d1-0c9238fa772f.png">
<img width="455" alt="p2" src="https://user-images.githubusercontent.com/63871993/213141014-a0346aad-0746-4919-a659-966393c3521a.png">

## Djikstra's
<img width="551" alt="d" src="https://user-images.githubusercontent.com/63871993/213141019-44449506-f3e4-4bb6-845d-59a5dd8cce8f.png">

## Kruskals
<img width="527" alt="krusk" src="https://user-images.githubusercontent.com/63871993/213141026-152dddab-479c-4262-81f9-3aa828abf4b7.png">
