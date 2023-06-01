# [Minimum Spanning Tree- using Kruskal Algorithm](https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a weighted, undirected and connected graph of V vertices and E edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

## Algorithm
- Create an empty vector 'edges' to store all the edges of the graph along with their weights and populate it using adjacent list.
- Sort the edges in ascending order.
- Create an instance of the DisjointSet.
- Initialize the MST weight as 0
- Iterate over the edge and check if the source and destination vertices are not in the same set(i.e., they don't have the same ultimate parent) then add the weight of that edge into resultant weight and perform the union of the sets containing.
- Return the MST weight, which represents the sum of the weights of the edges in the minimum spanning tree.

Time Complexity: O(E logE) </br>
Space Complexity: O(V+E) </br>
<code>V : number of vertices </br>
E : number of edges </code>

