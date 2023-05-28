# [Implementing Dijkstra Algorithm](https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a weighted, undirected and connected graph of V vertices and an adjacency list adj where adj[i] is a list of lists containing two integers where the first integer of each list j denotes there is edge between i and j , second integers corresponds to the weight of that  edge . You are given the source vertex S and You to Find the shortest distance of all the vertex's from the source vertex S. You have to return a list of integers denoting shortest distance between each node and Source vertex S.

## Algorithm
- Initialize a priority queue (min heap) to store pairs of vertices and their corresponding distances from source.
- Create a vector dist of size V(number of vertices) to store the shortest distances intialized to INT_MAX (infinity) for all the vertices except the source that is initialized to 0.
- Push the source vertex S with distance 0 into the priority queue.
- Repeat the following steps until the priority queue becomes empty.
    - Extract the vertex with the minimum distance from the priority queue.
    - For each adjacent vertex of the extracted vertex, update its distance if a shorter path is found and push it into the priority queue.

Time Complexity: O(V+E) </br>
Space Complexity: O(V) </br>
<code>V: vertices, E:edges</code>

