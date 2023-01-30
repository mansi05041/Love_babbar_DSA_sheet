# [Reverse a Doubly Linked list](https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a doubly linked list of n elements. The task is to reverse the doubly linked list.

## Input_output
Input: 3<-->4<-->5 </br>
Output: 5<-->4<-->3

## Algorithm
- set prev_ptr as NULL
- Move head forward until it becomes NULL and follow the given steps </br>
(i) set head->prev = head->next </br>
(ii) set head->next = prev_ptr </br>
(iii) update prev_ptr as head </br>
(iv) update head as head->prev 
- return prev_ptr

Time Complexity: O(n) </br>
Space ComplexitY: O(1)