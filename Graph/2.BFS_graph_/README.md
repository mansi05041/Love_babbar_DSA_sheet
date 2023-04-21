# [BFS of graph](https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.

## Algorithm
- Initialize a visit array of same size as vertices with 0 values.
- Initialize Queue and array that store BFS traversal
- Visit the first node and push into queue
- Repeat the given steps until the queue do not get empty.
    - remove the front node from quwuw and push it into BFS array.
    - Add the neighbor of removed node in queue if it is not visited.

Time Complexity: O(V+E) <br />
Space Complexity: O(V)