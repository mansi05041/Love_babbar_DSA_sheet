# [Print Adjacency list](https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the adjacency list of a bidirectional graph. Your task is to copy/clone the adjacency list for each vertex and return a new list.

## Algorithm
- Create an empty vector of vectors to store the graph
- Iterate over all vertices in the adjacency list
    - add the vertex itself to the resultant vector
    - Iterate over the connected vertices and add them into resultant vector.

Time Complexity: O(V+E) <br />
Space Complexity: O(V+E)