# [Detect cycle in undirected graph](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. Graph is in the form of adjacency list where adj[i] contains all the nodes ith node is having edge with.

## Algorithm
- Create an array visit and intialize it to 0.
- Iterate over all the nodes from 0 to V-1, and if the node is not visited call the CycleDfs function with parent as -1, return true if the checkCycle gives true value.
- In CycleDfs function:
    - mark the current node as visited in visit array.
    - iterate over all the adjacent nodes of the current node, and check is the adjacent node is not visited.
    - if the adjacent node is not visited, recursively call the CycleDfs for that node.
    - if the adjacent node is visited and present is not the parent node, then a cycle is present return true.
    - return false
- return false, if CycleDfs gives false boolean value.

Time Complexity: O(V+E) <br />
Space Complexity: O(V+E)