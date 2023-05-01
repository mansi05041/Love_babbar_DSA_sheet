# [Top View of Binary Tree](https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top

## Algorithm

- Create an empty map to store the nodes in the top view of the binary tree.
- Create a queue to store the nodes of the binary tree along with their horizontal distances from the root node.
- push the root node into the queue along with its horizontal distance which is 0.
- while the queue is not, perform the given operations:
    - Get the front node from the queue and remove it.
    - If the horizontal distance of the node is not present in the map, then insert the node's value into the map with horizontal distance as key.
    - If the left child of the node is present, push it into the queue with its horizontal distance as hd-1.
    - If the right child of the node is present, push it into the queue with its horizontal distance as hd+1.
-  create an empty vector, traverse the map and push the values into the vector.

Time Complexity: O(nlogn) n is the number of nodes + using map to store a node takes O(logn) time for each iteration <br />
Space Complexity: O(n)
