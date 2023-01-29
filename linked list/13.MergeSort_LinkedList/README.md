# [Merge Sort for Linked list](https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort. 

## Input_output
Input: 3->5->2->4->1 </br>
Output: 1->2->3->4->5

## Algorithm
- Find the middle node.
- Divide the linked list and call the mergeSort  recursively for the two halves.
- Merge the Two halves (with sorting).

Time Complexity: O(nlogn) </br>
Space Complexity: O(n)