# [Cyclically rotate an array by one](https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array, rotate the array by one position in clock-wise direction.</br>


### Input_output
Input - {1,2,3,4,5}
Output - {5,1,2,3,4}

## Algorithm

### Brute Force approach
- if only two elements are there then swap them.
- else store the last elmenent in temp, shift the all elements towards right. set the arr[0]=temp.

Time Complexity: O(n) </br>
Space Complexity: O(1) </br>

### Reverse Array Approach
- Reverse the whole array
- Reverse the array from index 1 to n-1

Time Complexity: O(n) </br>
Space Complexity: O(1)
