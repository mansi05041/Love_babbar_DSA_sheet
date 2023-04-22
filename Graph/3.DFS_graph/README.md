# [DFS of graph](https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
You are given a connected undirected graph. Perform a Depth First Traversal of the graph. </br>
Use a recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.

## Algorithm
- Initialize a visit array of same size as vertices with 0 values.
- Initialize an array that store DFS traversal
- Call dfs for the first node.
- In dfs method 
    - visit the node
    - push the node into DFS traversal array.
    - call the recursive function dfs for the adjacent neighbors

Time Complexity: O(V+E) <br />
Space Complexity: O(V+E)