# [Insert Node in BST](https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a BST and a key K. If K is not present in the BST, Insert a new Node with a value equal to K into the BST. 

## Algorithm

- If the root is null then create a new node with the given key and return it.
- If the root's data is equal to the key, it returns the root itself as the key is already present in the BST.
- If the key is greater than the root's data, it recursively inserts the key in the right subtree of the root.
- If the key is smaller than the root's data, it recursively inserts the key in the left subtree of the root.

Time Complexity: O(n) <br />
Space Complexity: O(h) - h is the height of tree. 
