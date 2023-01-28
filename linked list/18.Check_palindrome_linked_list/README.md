# [Check if linked list is Palindrome](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

## Input_output
Input: 1->2->1 </br>
Output: true

## Algorithm

### Using Stack
- push every node from head in the stack.
- visit the node from head and compare it with top node of stack.
- If values are not equal return fasle, otherwise update current node and pop the node from the stack

Time Complexity: O(n)</br>
Space Complexity: O(n)

### By Reversing the half linked list
- Find the middle node.
- Reverse the linked list from middle node.
- Compare the nodes from both linked list's head untill reach beyond middle.

Time Complexity: O(n) </br>
Space ComplexitY: O(1)