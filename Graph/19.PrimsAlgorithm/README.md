# [Minimum Spanning Tree- using Prims Algorithm](https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a weighted, undirected and connected graph of V vertices and E edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

## Algorithm
- Intialize a priority queue (min heap) to store pairs of (weight,node) in ascending order of weight. This will help us to select the minimum weight.
- Initialize a visited array to keep the track of visited nodes.
- Push the source node with an intial weight 0 into the priority queue.
- Initialize a variable sum to store the sum of weights of edges in the Minimum spanning tree.
- Repeat the following steps until the priority queue is empty.
    - Remove the pair with the minimum weight from the priority queue.
    - If the corresponding node is already visited, continue to next iteration.
    - Mark the node as visited and add its weight to the sum.
    - Iterate over the neighbors of the node and for each neighbor that is not visited, push it into the priority queue along its weight.
- Return the sum, which represents the sum of weights of edges in the Minimum spanning Tree.

Time Complexity: O((V+E)log V) </br>
Space Complexity: O(V) </br>
<code>V : number of vertices </br>
E : number of edges </code>

