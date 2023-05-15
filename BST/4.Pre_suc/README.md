# [Predecessor and Successor](https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1)
## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
There is BST given with root node with key part as an integer only. You need to find the in-order successor and predecessor of a given key. If either predecessor or successor is not found, then set it to NULL.

## Algorithm
- Intialize pre and suc as NULL;
- if root is NULL, return.
- If key is smaller than the value at the current node, update the successor to the current node and recursively call findPreSuc on the left subtree.
- If the key is larger than the value at the current node, update the predecessor to the current node and recursively call findPreSuc on the right subtree.
- If key is equal to the value of current node, find the predecessor and successor of the current node by calling FindPrecessor() and FindSuccessor() functions respectively.

Time Complexity: O(h) <br />
Space Complexity: O(h) <br />
where h is the height of tree.
