# [Rotate Doubly linked list by N nodes](https://www.geeksforgeeks.org/rotate-doubly-linked-list-n-nodes/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a doubly-linked list, rotate the linked list counter-clockwise by N nodes. Here N is a given positive integer and is smaller than the count of nodes in linked list. 

## Input_output
Input: 1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9 , N =2 </br>
Output:  4 <-> 5 <-> 6 <-> 8 <-> 9 <-> 1 <-> 2

## Algorithm
- Connect the last node with head making it circular linked list.
- Move head and last forward untill count>N 
- return head

Time Complexity: O(n)</br>
Space Complexity: O(1)