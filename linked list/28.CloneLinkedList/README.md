# [Clone a Linked List with next and random pointer](https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b. <br/>

Construct a copy of the given list. The copy should consist of exactly N new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

## Input_output
Input: N = 4, M = 2 </br>
value = {1,2,3,4} </br>
pairs = {{1,2},{2,4}} </br>
Output:  1

## Algorithm
- Insert additional node after every node with the same value of current node.
- adjust the random pointers of the newly added nodes
- Separate the original list and cloned linked list
- Return the head of cloned linked list

Time Complexity: O(n)</br>
Space Complexity: O(1)