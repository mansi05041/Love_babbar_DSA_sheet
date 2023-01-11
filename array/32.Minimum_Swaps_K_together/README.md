# [Minimum swaps and K together](https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

### Input_output
Input: arr[] = {2, 1, 5, 6, 3} </br>
K = 3 </br>
Output : 1 </br>
Explanation:
To bring elements 2, 1, 3 together, swap index 2 with 4 (0-based indexing), i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be- arr[] = {2, 1, 3, 6, 5}

## Algorithm
- Find the count of all elements which are less than or equal to k.
- Using two pointer technique , each time keep track of elements that are greater than k.
- Repeat above step for every window lwngth and take minimum of count.

Time Complexity : O(n)</br>
Space Complexity : O(1)
