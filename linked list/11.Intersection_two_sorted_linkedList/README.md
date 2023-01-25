# [Intersection of two sorted linked list](https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with its own memory the original lists should not be changed.

## Input_output
Input: L1 = 1->2->3->4->6 </br>
L2 = 2->4->6->8
Output: 2->4->6

## Algorithm
- Intialize curr1 and curr2 pointing to the heads of linked lists respectively.
- Intialize head and tail as NULL , they will track the intersection linked list.
- move the node whose value is smaller than other untill one of them becomes NULL.
- if curr1->data == curr2->data then create new node with the same value and add it to the intersection linked list

Time Complexity: O(N)</br>
Space Complexity: O(N+M)