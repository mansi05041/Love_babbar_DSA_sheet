# [Left View of Binary Tree](https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

## Algorithm

- If the root is null then return.
- Check if the current level is greater than the maximum level visited so far. If it is, add the value of current node to LeftView traversal array and update maxLevel.
- Call the recursive function for the left child.
- Call the recursive function for the right child.

Time Complexity: O(n) <br />
Space Complexity: O(h) - h is the height of tree. 
