# [Array subset of another array](https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 

### Input_output
Input: </br>
a1[] = {11, 1, 13, 21, 3, 7} </br>
a2[] = {11, 3, 7, 1} </br>
Output: Yes

## Algorithm
- Create a map to store the frequency of a1 array
- In loop check if the element present there, if not return "NO" or else decrement the frequency
- Outside the loop return "YES"

Time complexity: O(n) </br>
Space complexity: O(n)