# [Populate Inorder Successor for all nodes](https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1)
## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Tree, write a function to populate next pointer for all nodes. The next pointer for every node should be set to point to inorder successor.

## Algorithm
- Intialize a 'prev' pointer as NULL.
- Call the Recursive function to traverse the left subtree. The next pointer of the left subtree's nodes is correctly populated.
- check if prev is not NULL, then set prev->next to the current root node.
- update the prev to the current root node.
- Call the Recursive function to traverse the right subtree. The next pointer of the right subtree's nodes is correctly populated.
- The inorder traversal continues until all nodes have been visited.

Time Complexity: O(n) <br />
Space Complexity: O(h) <br />
where h is the height of tree.
