# [ncr](https://practice.geeksforgeeks.org/problems/ncr1019/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

### Input_output
Input: n = 3, r = 2 </br>
Output: 3

## Algorithm
- Check if n is less than r, return 0 since it is not possible to choose r elements from a set of size 'n'
- Check if n-r is less than r. If so, update n-r to r because calculating "n choose r" is equivalent to calculating "n choose (n-r)"
- set the mod to be 10^9+7
- create a dp vector of size r+1 and initialize all elements to 0. This vector will be used for dynamic programming.
- set dp[0] to 1.
- start a loop that iterates 1 to n (inclusive)
- Inside the loop start an inner loop that iterates from min(i,r) down to 1
- Inside the inner loop, update each element of 'dp' by adding the current element with the previous element in the dp array.
- Take the modulo of each updated element with mod to avoid overflow.
- After the nested loop return dp[r]

Time Complexity : O(n*r) </br>
Space Complexity : O(r)

