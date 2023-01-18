# [Reverse the linked List in groups of given size](https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed.

### Input_output
Input : 1->2->2->4->5->6->7->8 </br>
k=4 </br>
Output : 4->2->2->1->8->7->6->5

## Algorithm

### Recursive Method
- If head is NULL then return NULL
- Otherwise Initialize current = head, next_ptr=NULL and prev = NULL and count =0.
- Reverse the first k nodes of the linked list
```
while(current!=NULL and count<k)
    next_ptr=current->next
    current->next=prev
    prev=current
    current=next_ptr;
    count++

```
- Recursively call for the list starting from current and make rest of the list as next of first node. 
- Return prev, it will be new head of the input list.

Time Complexity: O(n) </br>
Space Complexity: O(n/k)

### Iterative Method
- Count the total nodes
- use three nodes curr, prev and next_ptr currently point to dummy node, the dummy node points to head of linked list.
- Iterate on next_ptr untill it becomes null
```
set curr=prev->next 
set next_ptr=curr->next
if count>k then iterate to k otherwise count-1 in for loop
in for loop 
    curr->next=next_ptr->next
    next_ptr->next=prev->next
    prev->next=next_ptr
    next_ptr=curr->next
set prev=curr
decrement count by k

```
- return dummy->next