# [Segregate even and odd nodes in a Linked list](https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a link list of size N, modify the list such that all the even numbers appear before all the odd numbers in the modified list. The order of appearance of numbers within each segregation should be same as that in the original list.

## Input_output
Input: 17 -> 15 -> 8 -> 9 -> 2 -> 4 -> 6 -> NULL </br>
Output: 8 -> 2 -> 4 -> 6 -> 17 -> 15 -> 9

## Algorithm

### Move all odd nodes to the tail of the linked list
- Get a pointer to the last node.
- Move all odd nodes to the end

Time Complexity: O(n)</br>
Space Complexity: O(1)

### Split the linked list into two
- create Even linked list and odd linked list
- Move all the even nodes to the end of even linked list and all the odd nodes to the end of odd linked list.
- Join the even tail to the odd head 
- Return even head

Time Complexity: O(n)</br>
Space Complexity: O(1)