# [Check if circular linked list](https://practice.geeksforgeeks.org/problems/circular-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.

## Input_output
Input: head->1->2->3->4->5->head </br>
Output: True

## Algorithm
- Initialize curr referencing to head
- repeat below steps untill curr becomes NULL
(i) if curr->next==head return true </br>
(ii) otherwise update curr

Time Complexity: O(n)</br>
Space Complexity: O(1)