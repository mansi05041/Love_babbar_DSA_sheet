# [Sort a k sorted doubly Linked list](https://www.geeksforgeeks.org/sort-k-sorted-doubly-linked-list/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a doubly linked list containing n nodes, where each node is at most k away from its target position in the list. The problem is to sort the given doubly linked list.

## Input_output
Input: 3 <-> 6 <-> 2 <-> 12 <-> 56 <-> 8  , k =2 </br>
Output: 2 <-> 3 <-> 6 <-> 8 <-> 12 <-> 56

## Algorithm

### Naive Approach
- Sort the doubly linked list using insertion sort technique.
- While inserting each element in the sorted part of the list, there will be at most k swaps to place the element to its correct position since it is at most k steps away from its correct position.
Time Complexity: O(n*k) </br>
Space Complexity: O(1)

### using Min Heap Data Structure
- Sort the list using Min heap data structure of size k
- insert first (k+1) elements into it.
- in while loop complete the steps until it becomes empty.
    - remove the top node from heap and update the resultant linked list.
    - push the next node of given linked list into the heap.
- Return the resultant linked list
Time Complexity: O(n logk)</br>
Space Complexity: O(k)