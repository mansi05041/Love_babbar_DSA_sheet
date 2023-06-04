# [Strongly Connected Components (Kosaraju's Algo)](https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, Find the number of strongly connected components in the graph.

## Algorithm
- Intialize a Stack to store the nodes according to functioning time.
- Intializa a visited vector.
- maintain the stack using dfs
- Reverse the edges
- calculate number of strongly connected components using dfs traversal.

Time Complexity: O(V+E) </br>
Space Complexity: O(V+E) 


