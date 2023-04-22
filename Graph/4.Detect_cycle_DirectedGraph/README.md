# [Detect cycle in a directed graph](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.

## Algorithm
- Create two arrays named visit and dfsVisit, intialize them to 0.
- Iterate over all the nodes from 0 to V-1, and if the node is not visited call the checkCycle function, return true if the checkCycle gives true value.
- In checkCycle function:
    - mark the current node as visited in both visit and dfsVisit array.
    - iterate over all the adjacent nodes of the current node, and check is the adjacent node is not visited.
    - if the adjacent node is not visited, recursively call the checkCycle for that node.
    - if the adjacent node is visited and present in the dfsVisit array, then a cycle is present, return true.
    - unmark the current node from the dfsVisit array and return false.
- return false, if checkCycle gives false boolean value.

Time Complexity: O(V+E) <br />
Space Complexity: O(V+E)