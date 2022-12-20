# [Next Permutation](https://leetcode.com/problems/next-permutation/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
The next permutation of an array of integers is the next lexicographically greater permutation of its integer.Given an array of integers nums, find the next permutation of nums.</br>
The replacement must be in place and use only constant extra memory.

### Input_output
Input: nums = [1,2,3] </br>
Output: [1,3,2]

## Algorithm

### Brute Force
- Find out every possible permutation which is just larger than the given one. 

Time complexity: O(n!)
Space complexity: O(n)

### Single pass approach
- check the array is not in descending order, if it is then no next permutation is possible
- find the mountain element from right side. that is a[i] if it satisfy a[i]< a[i+1]
- if the i<0 , the permutation is itself is the greatest than sort the array
- else find the largest element from mountain element starting with right side such that a[j] > a[i] in a loop
- swap the a[i] and a[j]
- reverse the elements after the mountain element to the end of array

Time complexity: O(n) </br>
Space complexity: O(1)