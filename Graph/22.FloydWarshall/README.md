# [Floyd Warshall](https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed graph. The graph is represented as an adjacency matrix of size n*n. Matrix[i][j] denotes the weight of the edge from i to j. If Matrix[i][j]=-1, it means there is no edge from i to j.

## Algorithm
- Initialize the matrix by changing -1 to INT_MAX (a larger value representing the infinty) and setting the diagonal elements to 0.
- Perform the Floyd warshall algorithm
    - Iterate over a middle vertex 'via' from 0 to n-1
    - Iterate over all the pairs of vertices 'i' and 'j'
    - Check if the distance from vertex 'i' to 'via' and from vertex 'via' to 'j' is not infinity and if the sum of these distance is smaller than the current distance from 'i' and 'j'.
    - If the above condition is true, update the distance from 'i' to 'j' with the smaller value.
- Finally change all occurrences of 'INT_MAX' in the matrix to '-1'.

Time Complexity: O(n<sup>3</sup>) </br>
Space Complexity: O(n<sup>2</sup>) 


