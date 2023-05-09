# [Reverse a String](https://leetcode.com/problems/reverse-string/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Write a function that reverses a string. The input string is given as an array of characters s. </br>


### Input_output
Input: s = ["h","e","l","l","o"] </br>
Output: ["o","l","l","e","h"]

## Algorithm

- Intialize start =0 and end =n-1 where n is the size of array
- In a loop, swap the s[start] and s[end]. Then increment the start and decrement the end.

Time complexity : O(n) </br>
Space complexity : O(1)
