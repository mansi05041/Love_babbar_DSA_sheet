# [Remove Duplicates elements from sorted Linked list](https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).

## Input_output
Input: 2->2->4->5 </br>
Output: 2->4->5

## Algorithm

### using Hashing
- store the current node as value and frequency as key in map
- Create a linked list using map 

Time Complexity: O(N logN)</br>
Space Complexity: O(N)

### using two pointer approach
- Intialize prev and curr as head
- Repeat the below steps untill curr!=NULL
(i) if curr->data!= prev->data , then connect prev to curr and set prev equals to curr. </br>
(ii) update curr
- then check if curr!=prev results true then connect prev to NULL

Time Complexity: O(N) </br>
Space Complexity: O(1)