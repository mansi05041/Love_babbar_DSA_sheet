# [Middle of the linked list](https://leetcode.com/problems/middle-of-the-linked-list/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given the head of a singly linked list, return the middle node of the linked list.</br>
If there are two middle nodes, return the second middle node.

## Input_output
Input: 1->2->3->4->5 </br>
Output: 3

## Algorithm

### Counting the total nodes
- count total nodes
- if odd nodes present then return (n+1)/2 th node 
- otherwise return (n/2)+1 th node
Time Complexity: O(n)</br>
Space Complexity: O(1)

### By two pointer approach
- Intialize the slow and fast node referenced to head.
- slow takes one step and fast proceed two steps untill fast or fast->next becomes NULL.
- return slow

Time Complexity: O(n) </br>
Space Complexity: O(1)