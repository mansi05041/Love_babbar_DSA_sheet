# [Diameter of a Binary Tree](https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes.

## Algorithm
- Use Recursion to solve this Problem.
    - If the current node is null then return 0
    - otherwise call the recursion for left and right child to find the height.
    - Update the diameter 
- In Main function, call the Recursion function and pass root and diameter as reference.

Time Complexity: O(n) <br />
Space Complexity: O(h) - where h is the height of tree
