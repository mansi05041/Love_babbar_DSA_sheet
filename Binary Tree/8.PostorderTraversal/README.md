# [Postorder Traversal of tree](https://leetcode.com/problems/binary-tree-inorder-traversal/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the root of a binary tree, return the inorder traversal of its nodes' values.</br>
Inorder Traversal: Left Right Root

## Algorithm

### using recursion
- If the root is null, then return.
- call the recursive function for left child.
- call the recursive function for right child.
- Push the root into the traversal array.

Time Complexity: O(n) <br />
Space Complexity: O(n) 

### using stack (iterative)
- Use a stack to track the traversal.
- if root is null then return empty array.
- Push the root node into stack
- Repeat the following steps until the stack is not empty.
    - remove the top node from stack and push it's value into traversal array at 0th index.
    - If removed node's right child exists then push it into stack
    - If removed node's left child exists then push it into stack.
- return the traversal array.

Time Complexity: O(n) <br/>
Space Complexity: O(n)
