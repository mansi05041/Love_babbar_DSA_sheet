# [Flattening a Linked list](https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
- a next pointer to the next node,
- a bottom pointer to a linked list where this node is head. </br>
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 

## Input_output
Input: 5 -> 10 -> 19 -> 28 <br/>
|     |     |     | <br/>
7     20    22   35 <br/>
|           |     | <br/>
8          50    40 <br/>
|                 |  <br/>
30               45  <br/>
Output:  5-> 7-> 8- > 10 -> 19-> 20->22-> 28-> 30-> 35-> 40-> 45-> 50.

## Algorithm

## Using Merge Sort
- Recursively Call to merge the Current linked list with the next Linked list
- If the current list is empty or there is no next linked list then return the current linked list  (Base case)
- Start merging the linked lists, starting from the last linked list.
- After Merging the current linked list with the next linked list, return the head node of the current linked list.

Time Complexity: O(N*N*M) <br/>
Space Complexity: O(1) <br />

## Using MinHeap
- Create a Priority queue (Min-Heap) and push the head node of every linked list into it.
- Create newHead and newTail that will maintain the obtained linked list.
- while priority queue is not empty, extract the minimum value node from it. Push the next node linked to the minimum value node into the priority queue.
- join the minimum value node to the bottom of newTail and update newTail every time after the extracting min value node.

Time Complexity: O(N*M*log(N)) <br/>
Space Complexity: O(N)