# [Find The Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. </br>
There is only one repeated number in nums, return this repeated number. </br>
You must solve the problem without modifying the array nums and uses only constant extra space.</br>


### Input_output
Input : {1,3,4,2,2}  </br>
Output : 2</br>

## Algorithm

### Using sorting
- sort the array
- find the duplicate if arr[i] equals to arr[i+1]

Time Complexiy: O(n logn) </br>
Space Complexity: O(1)

### Using Map
- store the array elements as key and the frequency its value in map
- find the duplicate if value's frequency is more than 1

Time Complexity: O(n) </br>
Space Complexity: O(n)

### Using negative marking
- Iterate through array
- store the absolute value of arr[i] in pos
- check if the value of arr[pos] is not negative , if it is then return pos
- else multiply arr[pos] with (-1)

Time Complexity: O(n) </br>
Space Complexity:O(1)