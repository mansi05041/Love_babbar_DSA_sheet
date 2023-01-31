# [Find pairs with given sum in sorted doubly linked list](https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value target.

## Input_output
Input: 1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9 , target =7 </br>
Output: (1,6),(2,5)

## Algorithm

### using nested loops
- In nested loops find the pairs that's sum equals to target
```
    curr = head
    while(curr):
        ptr=curr->next
        while(ptr):
            if(curr->data+ptr->data==target):
                // save the pair
            ptr=ptr->next
        curr=curr->next
    
```
Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### using two pointer approach
- Set first node at head and last node at end of linked list.
- compare first and last untill they becomes equal or cross each other
- if first->data + last->data == target then save the pair and update first as first->next & last as last->prev
- otherwise if sum is smaller than target then update first, else update last.

Time Complexity: O(n)</br>
Space Complexity: O(1)