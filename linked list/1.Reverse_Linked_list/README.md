# [Reverse the linked List](https://leetcode.com/problems/reverse-linked-list/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given the head of a singly linked list, reverse the list, and return the reversed list.

### Input_output
Input : 1->2->3->4->5 </br>
Output : 5->4->3->2->1

## Algorithm
 
- Intialize a reference node that's prev = NULL.
- Move the head node till it becomes NULL and repeat the given steps.
(i) next_ptr points to the next node of head.</br>
(ii) head->next = prev</br>
(iii) set prev = head </br>
(iv) set head = next_ptr
- Return prev as reverse linked list

Time Complexity: O(n)
Space Complexity: O(1)
