# [Rat in a Maze Problem](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.

## Algorithm
- Create a visited matrix of size nXn intialized with false.
- If the starting cell is not valid(equals to 0), return -1
- Call the solve function with the starting position (0,0) of the grid.
- In solve Function :
    - if the curent position is the destination, then add the current path to the resultant vector and return.
    - Explore all four possible directions: Down, Left, Right and Up. 
- Return the resultant vector

Time Complexity: O(4<sup>n</sup>) <br />
Space Complexity: O(n<sup>2</sup>)