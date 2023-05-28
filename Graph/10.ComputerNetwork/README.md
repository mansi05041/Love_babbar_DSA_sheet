# [Number of operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
There are n computers numbered from 0 to n - 1 connected by ethernet cables connections forming a network where connections[i] = [ai, bi] represents a connection between computers ai and bi. Any computer can reach any other computer directly or indirectly through the network.</br>
You are given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected. </br>
Return the minimum number of times you need to do this in order to make all the computers connected. If it is not possible, return -1.

## Algorithm
- Check if the number of connections is less than n-1, if so return -1 because it is not possible to make all nodes connected.
- Create a visited array of size n and intialize all elements to false.
- Create an adjacency list to represent the graph
- Count the number of components using DFS 
- return the number of components obtained -1

Time Complexity: O(V+E) </br>
Space Complexity: O(n) </br>
<code>V: vertices, E:edges, n:no of components</code>

