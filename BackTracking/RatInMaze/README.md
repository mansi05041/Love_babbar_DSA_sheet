# [Rat in a Maze problem - I](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.</br>
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

### Input_output
Input - N = 4 </br>
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}</br>
Output - DDRDRR DRDDRR

## Algorithm
- If the First grid is block, i.e, m[0][0] = 0, then return -1
- Initialize a visited vector
- Call the recursive function dfs with grid position (i,j), visited vector, resultant string array, empty string, maze and size of maze
- if the resultant string array is empty, return -1
- return resultant string array.

DFS call implementation
- Base case: if reach to destination grid then push the path string into resultant string array.
- mark the grid visited
- Explore all the directions in lexicographically increasing order as : DLRU
- Make DFS call on the new grid only if it is within bound of maze, not visited yet and not blocked
- After exploring backtrack by marking the current grid unvisited.

Time Complexity: O(3<sup>n<sup>2</sup></sup>) </br>
Space Complexity: O(n<sup>2</sup>)