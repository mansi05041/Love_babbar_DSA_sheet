# [Minimum Step by Knight](https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position. </br>
Note: The initial and the target position coordinates of Knight have been given according to 1-base indexing.

## Algorithm
- Since it is 1-based indexing convert it into 0-based by subtracting the given inputs by 1.
- check if the given knight position is already equal to target position, on true return 0
- initialize a 2d array that marks the position visited.
- intialize a queue that stores the adjacent positions.
- push the current position and mark it visited
- maintain a steps variable tha will be return as answer.
- In nested while loop, in outer loop iterates it until the queue becomes empty, increment the steps.
- In inner loop repeat the following steps until the size of current queue becomes zero.
    - remove the front position from queue.
    - Add all the possible adjacent position in the queue, out of 8 (possible combination) check if it is valid or not.
    - if the above condition is true then check it is equal to the target position, then return steps.
    - push the position into queue and mark it visited
    - decrement the size
- outside the nested while loops return steps.

Time complexity: O(N<sup>2</sup>) </br>
Space complexity: O(N<sup>2</sup>)

