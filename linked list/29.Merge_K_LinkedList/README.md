# [Merge K sorted linked lists](https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

## Input_output
Input: {{1->2->3},{4->5},{5->6},{7->8}} </br>
Output: 1->2->3->4->5->5->6->7->8

## Algorithm
- set firstL = arr[0]
- In for loop [merge the two sorted linked list](https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/) in every iteration {firstL,arr[i]}.
- return the merge linked list

Time Complexity: O(nk logk) </br>
Space Complexity: O(k)