# [Minimum time taken by each job to be completed given by a Directed Acyclic Graph](https://practice.geeksforgeeks.org/problems/minimum-time-taken-by-each-job-to-be-completed-given-by-a-directed-acyclic-graph/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Directed Acyclic Graph having V vertices and E edges, where each edge {U, V} represents the Jobs U and V such that Job V can only be started only after completion of Job U. The task is to determine the minimum time taken by each job to be completed where each Job takes unit time to get completed.

## Algorithm
- Calculate the indegree of each node by iterating through the edges.
- Intialize the timer vector with zeros
- Create an adjacency list representation of the graph.
- Create a queue to store nodes with zero indegree.
- Push the nodes with zero indegree into the queue and set their timer to 1.
- While the queue is not empty, repeat the following steps:
    - Remove a node from the queue.
    - Iterate through its adjacent neighbors.
    - Decrement the indegree of each neighbor.
    - If the indegree of a neighbor becomes zero, push it into the queue and update its timer to the current node's timer plus 1.
- Return the timer

Time Complexity: O(n+m) </br>
Space Complexity: O(n+m) </br>
<code>n : nodes </br>
m : edges </code>

