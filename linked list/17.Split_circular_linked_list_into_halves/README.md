# [Split a Circular linked list into two halves](https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a Cirular Linked List of size N, split it into two halves circular lists. If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, first list should have one node more than the second list. The resultant lists should also be circular lists and not linear lists.

## Input_output
Input: head->1->2->3->head </br>
Output: head1->1->2->head1 and head2->3->head2

## Algorithm
- Intialize slow and fast as head
- move the slow one step and fast two steps untill fast->next becomes head and fast->next->next becomes head.
- if fast->next->next == head that means it has even nodes then make fast one step forward.
- set head1_ref = head 
- then set head2_ref =slow->next
- connect fast->next with head2_ref (slow->next)
- connect slow->next with head1_ref (head)

Time Complexity: O(n)</br>
Space Complexity: O(1)