# [Prerequisite Tasks](https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Directed Acyclic Graph having V vertices and E edges, where each edge {U, V} represents the Jobs U and V such that Job V can only be started only after completion of Job U. The task is to determine the minimum time taken by each job to be completed where each Job takes unit time to get completed.

## Algorithm
- Create an adjacency list to represent the graph.
- Calculate the indegree of each node.
- Create a queue and push all the nodes that have zero indegree.
- Create an empty array topoSort to store the topological sorting. 
- While the queue is not empty, repeat the following steps
    - dequeue a node from the queue.
    - add the remove node from topoSort.
    - iterate over the neighbors of the removed node in the adjacency list.
        - Decrement the indegree of each neighbor.
        - Enqueue the neigbor if the indegree is zero.
- If the size of topoSort equal to N, return true otherwise false.

Time Complexity: O(N+E) </br>
Space Complexity: O(N) </br>
<code>N : number of tasks </br>
E : number of prerequisites </code>

