# [Insert Node in BST](https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

## Algorithm
If the key to be deleted is smaller than the root value, the function is recursively called on the left subtree, and if it's larger, it's called on the right subtree. If the key is equal to the root value, then there are three cases to consider:
- If the root has no left child, the right child becomes the new root.
- If the root has no right child, the left child becomes the new root.
- If the root has both left and right children, the minimum value in the right subtree is found and assigned to the root. Then, the fucntion is called recursively on the right subtree to delete the node with the minimum value.


Time Complexity: O(n) <br />
Space Complexity: O(n) 
