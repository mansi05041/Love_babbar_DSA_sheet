# [Add Two numbers represented by linked lists](https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

## Input_output
Input: 4->5 + 5->9->1 </br>
Output: 6->3->6

## Algorithm
- Reverse the both linked list
- Create a head node that will track the resultant result.
- Add the both linked list untill first becomes null or second becomes null or carry gets zero.
- create a node in the loop assign the resultant value , update carry and head pointer
- return head after loop iteration.

Time Complexity: O(N)</br>
Space Complexity: O(1)