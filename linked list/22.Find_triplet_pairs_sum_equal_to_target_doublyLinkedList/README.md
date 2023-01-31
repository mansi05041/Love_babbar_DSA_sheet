# [Count triplets in a sorted doubly linked list whose sum is equal to a given value x](https://www.codingninjas.com/codestudio/problems/count-triplets-in-a-sorted-doubly-linked-list-whose-sum-is-equal-to-a-given-value-x_985286?leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a sorted doubly linked list of distinct nodes(no two nodes have the same data) and a value x. Count triplets in the list that sum up to a given value x.

## Input_output
Input: 1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9 , target =17 </br>
Output: 2

## Algorithm

### using nested loops
- In nested loops find the pairs that's sum equals to target
```
    curr = head
    while(curr):
        ptr=curr->next
        while(ptr):
            temp=ptr->next
            while(temp):
                if(curr->data+ptr->data+temp->data==target):
                    // save the pair
                temp=temp->next
            ptr=ptr->next
        curr=curr->next
    
```
Time Complexity: O(n<sup>3</sup>) </br>
Space Complexity: O(1)

### using two pointer approach
- Set first node at head and last node at end of linked list.
- In loop count the number of pairs that equals to x-first->data using [previous solution](https://github.com/mansi05041/Love_babbar_DSA_sheet/tree/main/linked%20list/21.Find_pairs_given_Sum_Doubly_linkedList) untill first becomes null

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)