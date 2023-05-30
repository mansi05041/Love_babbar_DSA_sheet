# [Negative weight cycle](https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a weighted directed graph with n nodes and m edges. Nodes are labeled from 0 to n-1, the task is to check if it contains a negative weight cycle or not.
Note: edges[i] is defined as u, v and weight.

## Algorithm
- check if the number of edges is 0, return 0 indicating there is no negative cycle exists.
- Intialize the distance vector 'dist' with INT_MAX values for all the vertices.
- Find the source node by getting the first node from the first edge in the edges vector.
- Set the distance of the source node to 0.
- Iterate n-1 times to perform relaxation on all edges.
    - For each edge(u,v,wt) if the dist[u]!=INT_MAX and dist[u]+wt<dist[v] then update dist[u]
- Iterate over the edges vector again to check for any negative weight cycles. check the above condition at the Nth iteration, if true return 1 indicating a negative weight cycle exists.
- If no negative weight cycle is found after the iterations, return 0

Time Complexity: O(n*E) </br>
Space Complexity: O(n) </br>
<code>n : number of vertices </br>
E : number of edges </code>

