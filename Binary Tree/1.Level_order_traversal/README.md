# [Level order Traversal](https://practice.geeksforgeeks.org/problems/level-order-traversal/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

## Algorithm
- Intialize a queue for storing node and push the root into it.
- Maintain a traversal array.
- Repeat the following steps until the queue is empty:
    - Remove the front node from queue and push back its value into array.
    - Check if removed nodes' left and right node exists or not. If exists then push it into queue.

Time Complexity: O(n) <br />
Space Complexity: O(n)