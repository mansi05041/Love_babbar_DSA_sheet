# [Quick Sort on Singly linked List](https://www.geeksforgeeks.org/quicksort-on-singly-linked-list/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list, apply the Quick sort algorithm to sort the linked list.

## Input_output
Input: 3->5->2->4->1 </br>
Output: 1->2->3->4->5

## Algorithm
- Call Partition funtion to get a pivot node placed at its correct position.
    - In the partition function, the last element is considered as pivot.
    - Then traverse the current list and if a node has a value greater than the pivot, then move it after the tail. If node has a smaller value, then keep it at its current position.
    - Return the pivot node
- Find the tail of the list which is on the left of the pivot and recur for the left list
- Similarly, after the left side, recur for the list on the right side of the pivot.
- Now return the head of the linked list after joining the left and right list, as the whole list is now sorted.


Time Complexity: O(nlogn), but in worst case O(n<sup>2</sup>) </br>
Space Complexity: O(n)