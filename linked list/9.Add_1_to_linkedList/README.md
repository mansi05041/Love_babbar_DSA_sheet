# [Add 1 to a number represented as linked list](https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

## Input_output
Input: 4->5->6 </br>
Output: 4->5->7

## Algorithm
- Reverse the linked list, add 1 to the curr->data 
- update carry and add to next node ( if carry != 0)
- repeat the above step until curr becomes null.
- Reverse the linked list. if carry!=0 then connect node with carry value at front of linked list.

Time Complexity: O(N)</br>
Space Complexity: O(1)