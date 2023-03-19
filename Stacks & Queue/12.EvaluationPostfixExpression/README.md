# [Evaluation of Postfix Expression](https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given string S representing a postfix expression, the task is to evaluate the expression and find the final value. Operators will only include the basic arithmetic operators like *, /, + and -.

## Input_output
Input : S = "231*+9-" </br>
Output : -4

## Algorithm
- Using a stack of int type.
- Iterate the loop to traversal char of given String.
    - push the character if it is digit
    - if it is operator then pop two upper values from stack and perform the operation on them and push the result into stack
- return the top of stack

Time Complexity: O(n) <br />
Space Complexity: O(n)