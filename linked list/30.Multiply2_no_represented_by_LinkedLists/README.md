# [Multiply 2 no. represented by Linked Lists](https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. </br>
Note: The output could be large take modulo 109+7.

## Input_output
Input: 3->2->null , 2->null</br>
Output: 64

## Algorithm
- iterate every node and multiply it with 10 and add with ans and stored to the ans.
- For both linked list, multiplied the answers obtained and use mod technique as provided

Time Complexity: O(n) </br>
Space Complexity: O(1)