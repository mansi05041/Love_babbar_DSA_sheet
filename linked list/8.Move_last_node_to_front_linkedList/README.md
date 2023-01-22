# [Move Last element to front of a given linked list](https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Write a function that moves the last node to the front in a given Singly Linked List.

## Input_output
Input: 1->2->3->4->5 </br>
Output: 5->1->2->3->4

## Algorithm
- Maintain two pointer which will track second last node and last node
- connect second last node with NULL.
- connect last with Head

Time Complexity: O(N)</br>
Space Complexity: O(1)