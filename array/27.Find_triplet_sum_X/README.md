# [Find a triplet that sum to a given value](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

### Input_output
Input: </br>
arr = {1, 4, 45, 6, 10, 8} </br>
X = 6 </br>
Output: True

## Algorithm

### Naive Approach
- Create three nested loop, first loop runs from start to end, second loop runs from i+1 to end and third loop runs from j+1 to end.
- Find the sum of ith, jth, kth element. if the sum is equal to the given sum. return True
- If there is no triplet found return false.

Time Complexity: O(n<sup>3</sup>)</br>
Space Complexity: O(1)

### Using Sorting method
- Sort the given array.
- Loop over the array and fix the first element of the possible triplet
- Then fix two pointers, at i+1 and other at n-1 and find sum
(i) If sum is smaller than the required sum, increment the first pointer.</br>
(ii) Else if the sum is bigger, decrease the end pointer to reduce the sum.</br>
(iii) Else return true
- If Triplet not found at the end of loop return false

Time complexity: O(n<sup>2</sup>) </br>
Space complexity: O(1)
