# [Intersection point of two linked list](https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

## Input_output
Input: L1 = 3->6->9->common </br>
L2 = 10->common </br>
common = 15->30->NULL </br>
Output: 15

## Algorithm

### Counting the total nodes
- Count the total nodes in both linked list and get the difference.
- move the head of greater linked list by difference.
- now check if both the nodes (from different linked lists) are equal then return node.
- otherwise move both pointer forward.

Time Complexity: O(n) </br>
Space Complexity: O(1)

### By using detect loop in linked list approach
- connect any one of the linked list with tail. 
- Now it becomes the question to detect the loop. That is explain in this [approach](https://github.com/mansi05041/Love_babbar_DSA_sheet/tree/main/linked%20list/5.Find_Start_node_Linked_List).

Time Complexity: O(n) </br>
Space Complexity: O(1)