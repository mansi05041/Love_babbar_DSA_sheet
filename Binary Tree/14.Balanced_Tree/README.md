# [Check for Balanced Tree](https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree, find if it is height balanced or not. 
A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

## Algorithm

- In Function isBalanced call the GetHeight function, which set the value of flag according to the condition.
- In GetHeight function:
    - if the node is null return 0
    - call the recursive call of GetHeight for left and right subtree.
    - Check the condition: abs(height of left subbtree - height of right subtree) > 1 , then set flag as false.
    - Return the height of current node that is max(height of left subtree, height of right subtree)+1
- Return the flag  

Time Complexity: O(n)<br />
Space Complexity: O(h), where h - height of tree
