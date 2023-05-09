# [Palindrome String](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string S, check if it is palindrome or not.</br>


### Input_output
Input: S = "abba" </br>
Output: 1 </br>
Explanation: S is a palindrome

## Algorithm

- Intialize start =0 and end =n-1 where n is the size of array
- In a loop, check if the s[start] and s[end] are not equal, if so return 0 (false). 
- Otherwise, increment the start and decrement the end.
- Outside the loop return 1 (true)
Time complexity : O(n) </br>
Space complexity : O(1)
