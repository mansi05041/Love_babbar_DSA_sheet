# [Right View of Binary Tree](https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

## Algorithm

- If the root is null then return.
- Check if the current level is greater than the maximum level visited so far. If it is, add the value of current node to RightView traversal array and update maxLevel.
- Call the recursive function for the right child.
- Call the recursive function for the left child.

Time Complexity: O(n) <br />
Space Complexity: O(h) - h is the height of tree. 
