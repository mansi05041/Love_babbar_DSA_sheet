# [Reverse Level order Traversal](https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

## Algorithm
- Intialize a queue for storing node and push the root into it.
- Maintain a Stack for storing reverse traversal.
- Maintain a traversal array.
- Repeat the following steps until the queue is empty:
    - Remove the front node from queue and push back its value into array.
    - Check if removed nodes' right and left node exists or not. If exists then push it into Stack.
- Repeat the following steps until the stack is empty:
    - Push back the top element of stack into traversal array.
    - Pop the top element.

Time Complexity: O(n) <br />
Space Complexity: O(n)