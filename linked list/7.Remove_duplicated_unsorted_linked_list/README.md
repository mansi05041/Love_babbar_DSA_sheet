# [Remove Duplicates elements from unsorted Linked list](https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.

## Input_output
Input: 5->2->2->4 </br>
Output: 5->2->4

## Algorithm

### using nested loop
- set node1 and node2 as head and head->next respectively
- In nested loop check if node1->data != node2->data, 
if yes then connect node1 to node2->next and update node2.
- update node1 in outer loop.

Time Complexity: O(N<sup>2</sup>) </br>
Space Complexity: O(1)

### using Hashing
- Store the current node's data in set if not present and update prev , else connect prev with curr->next.
- update curr in while loop 

Time Complexity: O(N)</br>
Space Complexity: O(N)
