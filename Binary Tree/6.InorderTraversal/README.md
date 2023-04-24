# [Inorder Traversal of tree](https://leetcode.com/problems/binary-tree-inorder-traversal/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the root of a binary tree, return the inorder traversal of its nodes' values.</br>
Inorder Traversal: Left Root Right

## Algorithm

### using recursion
- If the root is null, then return.
- call the recursive function for left child.
- Push the root into the traversal array.
- call the recursive function for right child.

Time Complexity: O(n) <br />
Space Complexity: O(h) - where h is the height of tree 

### using stack (iterative)
- Use a stack to track the traversal.
- Repeat the following steps until the root is not null or stack is not empty.
    - traverse to the left , push the temp into stack and update temp until it becomes null.
    - remove the top node from stack and push it's value into traversal array.
    - traverse to the right, update the temp towards right.
- return the traversal array.

Time Complexity: O(n) <br/>
Space Complexity: O(n)
