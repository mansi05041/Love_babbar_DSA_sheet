# [Max and Min element in Binary Search Tree](https://practice.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1)
## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Search Tree, find maximum and minimum elements in it.

## Algorithm

### Find max element
- check if the root is NULL, if yes return -1.
- Set MaxVal to the data value of the root node.
- Traverse down the right subtree untill we reach the rightmost node of the tree.
- Update MaxVal to the data value of the current node.
- Return MaxVal.

### Find min element
- check if the root is NULL, if yes return -1.
- Set MinVal to the data value of the root node.
- Traverse down the left subtree untill we reach the leftmost node of the tree.
- Update MinVal to the data value of the current node.
- Return MinVal

Time Complexity: O(n) <br />
Space Complexity: O(1) 
