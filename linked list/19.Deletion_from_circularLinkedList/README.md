# [Deletion of node from Circular Linked list](https://www.codingninjas.com/codestudio/problems/deletion-in-circular-linked-list_630409?leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a Circular linked list of integers and an integer key. Delete the node having value equals to key. If no such key is present then the list remains unchanged

## Input_output
Input: head->1->2->3->4->5->head </br>
Key = 3 </br>
Output: head->1->2->4->5->head

## Algorithm
- If the first node matches then delete the node from begining
- Otherwise maintain prev and curr. Set curr = head
- In loop check if curr->data == key then set prev->next = curr->next and return the list. Else update prev and curr.
- If the last node matches then delete the node from end.

Time Complexity: O(n) </br>
Space ComplexitY: O(1)