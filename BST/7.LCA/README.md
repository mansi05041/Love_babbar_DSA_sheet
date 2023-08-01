# [Lowest Common Ancestor in a BST](https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1)
## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Tree and two node values n1 and n2 (n1!=n2). Find the lowest Common Ancestor of the two nodes in the BST

## Algorithm
- Base case
    - if the root is null
    - or if root->data = n1
    - or root->data = n2, then return root
- Traverse to left subtree
- Traverse to right subtree
- if left node is found null then return right
- else if right node is found null then return left
- else return node

Time Complexity: O(n) <br />
Space Complexity: O(h) <br />
where h is the height of tree.
