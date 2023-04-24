# [Mirror of a Tree](https://leetcode.com/problems/invert-binary-tree/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the root of a binary tree, invert the tree, and return its root.

## Algorithm
- If the root node is null, return null (Edge case)
- Intialize left to the left child of the root and right to the right child of the root.
- Swap the left and right child nodes of the root.
- Recursively call InvertTree() on the right child node and assign value to the left child node of the root.
- Similarly perform the InvertTree() on the left child node.
- Return the root.

Time Complexity: O(n) <br />
Space Complexity: O(h) - where h is the height of tree
