# [Delete nodes which have greater value on right side](https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list, remove all the nodes which have a greater value on their right side.

## Input_output
Input:12->15->10->11->5->6->2->3</br>
Output: 15->11->6->3

## Algorithm

### naive approach
- In nested loop, for every node find if there is node greater on right.
- Remove that node

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Using reverse approach
- Reverse the linked list.
- Maintain the max of linked list in every iteration.
- In while loop if curr->next->data is greater than max then update max and move curr forward.
- else remove curr
- After while loop, again implement reverse of linked list

Time Complexity: O(n)</br>
Space Complexity: O(1)