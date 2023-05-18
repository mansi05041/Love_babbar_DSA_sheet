# [Check for BST](https://practice.geeksforgeeks.org/problems/check-for-bst/1)
## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the root of a binary tree. Check whether it is a BST or not.</br>
We are considering that BSTs can not contain duplicate Nodes.A BST is defined as follows:
- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.

## Algorithm
- If the root is null, return true.
- check if the root's value is greater than every node in subleft tree and smaller than every node in subright tree and the left and right child is itself following the BST property then return true.
- return false if the above conditions not satisfy.

Time Complexity: O(n) <br />
Space Complexity: O(h) <br />
where h is the height of tree.
