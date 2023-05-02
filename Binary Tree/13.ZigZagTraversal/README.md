# [Zig-Zag traversal of Binary Tree](https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.

## Algorithm

- Create an empty vector ans to store the final traversal sequence.
- If the root is 'NULL', return empty vector.
- Create a queue to store the nodes of the tree.
- Initialize a boolean value 'isOddLevel' to true.
- While the queue is not empty repeat the following steps:
    - create an empty vector 'levelNode' to store the node at each level.
    - Get the size of the queue and perform the following steps while size not becomes 0.
        - Dequeue a node from the front of the queue.
        - push the value of the dequeued node into 'levelNode'.
        - If the left child of the dequeued node exists, enqueue it into the queue.
        - If the right child of the dequeued node exists, enqueue it into the queue.
    - if 'isOddLevel' is false, reverse the levelNode vector.
    - Append the levelNode vector to the resultant vector.
    - Flip the value of 'isOddLevel'
- Return the resultant vector.

Time Complexity: O(n)<br />
Space Complexity: O(n)
