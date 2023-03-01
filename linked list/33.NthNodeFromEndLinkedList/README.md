# [Program for nth node from the end of a linked List](https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

## Input_output
Input: 1->2->3->4->5->6->7->8->9 , N=2</br>
Output: 8 

## Algorithm

### Naive Approach
- Find the total nodes in linked list. 
- Reach to the (total-N)th node

Time Complexity: O(n) (Two iterations required)</br>
Space Complexity: O(1)

### Using two pointers
- Maintain two pointers fast and slow
- Move fast to the Nth node from the start
- Now move both the fast and slow until fast reaches the last node.
- return the slow->data

Time Complexity: O(n) (Only one iteration required)</br>
Space Complexity: O(1)