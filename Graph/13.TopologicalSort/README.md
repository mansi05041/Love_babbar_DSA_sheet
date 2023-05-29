# [Topological Sort](https://practice.geeksforgeeks.org/problems/topological-sort/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.

## Algorithm
- Create a stack to store the topological sort.
- Initialize a visited array to keep track of visited nodes.
- Perform a DFS traversal on each unvisited node in the graph.
- During the DFS traversal, mark the current node as visited and recursively visit all its adjacent nodes that have not been visited.
- Once all the adjacent nodes have been visited, push the current node onto the stack.
- Repeat the above steps until all nodes have been visited.
- Pop elements from the stack and append them to the result vector to obtain the topoplogical order.

Time Complexity: O(V+E) </br>
Space Complexity: O(V) </br>
<code>V: vertices, E:edges</code>

