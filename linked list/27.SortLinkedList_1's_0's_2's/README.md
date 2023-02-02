# [Given a linked list of 0s, 1s and 2s, sort it](https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

## Input_output
Input: 1->2->2->1->2->0->2->2 </br>
Output:  0->1->1->2->2->2->2->2

## Algorithm

### By counting the frequency
- Count the number of zeros, ones and twos present in the linked list.
- Update the values of nodes

Time Complexity: O(n)</br>
Space Complexity: O(1)

### By changing Links
- list the zero, ones and two in different node reference.
- Connect the linked lists.
- return the modified head

Time Complexity: O(n)</br>
Space Complexity: O(1)