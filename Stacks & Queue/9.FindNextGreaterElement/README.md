# [Find the Next Greater Element](https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array. <br/>
Next greater element of an element in the array is the nearest element on the right which is greater than the current element. <br/>
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1. <br/>

## Input_output
Input : arr[] = [1 3 2 4] </br>
Output : 3 4 4 -1

## Algorithm

### Using Nested Loops
- The outer loop picks all the elements one by one.
- The inner loop looks for the first greater element for the element picked by the outer loop.
- If a greater element is found then that element is printed as next, otherwise -1 is printed. 

Time Complexity: O(n<sup>2</sup>) <br />
Space Complexity: O(1)

### Using Stack
- traverse the given array from end.
    - remove all the elements from stack if the stack is not empty and the current element is greater and equal than the top of stack.
    - if the stack is empty then set the next greater -1.
    - else set the next greater with the reference of top of stack.
    - push the current index of element into stack

Time Complexity: O(n) <br />
Space Complexity: O(n)