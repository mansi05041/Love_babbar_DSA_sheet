# [Reverse Doubly linked list in group of given size](https://www.geeksforgeeks.org/reverse-doubly-linked-list-groups-given-size/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a doubly linked list containing n nodes. The problem is to reverse every group of k nodes in the list.

## Input_output
Input: 1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9 , k =2 </br>
Output:  2 <-> 1 <-> 5 <-> 4 <-> 8 <-> 6 <-> 9

## Algorithm
- Reverse the first k group.
- If the other groups are present then recursively call to itself and linked the lists.
- return the new head node of the resultant linked list

Time Complexity: O(n)</br>
Space Complexity: O(1)