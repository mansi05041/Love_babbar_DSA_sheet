# [Find the number of islands](https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.
</br>
Note: An island is either surrounded by water or boundary of grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.

## Algorithm
- Create a 2D visited array same size as given input array.
- iterate over each cell in the grid using nested loops.
- if the cell is unvisited, increment the islands by 1 and call the bfs function to perform BFS starting from that cell.
- In bfs function
    - mark the current cell visited.
    - Create a queue and push the starting cell coordinates into the queue.
    - while the queue is not empty, repeat the following steps
        - dequeue thr front element of the queue
        - traverse all the eight adjacent cells around and calculate the new grid. if the new indices are valid, not visited and contains land then mark them as visited and push them into queue.

Time Complexity: O(N*M) </br>
Space Complexity: O(N*M) </br>
<code>N : number of rows </br>
E : number of columns </code>

