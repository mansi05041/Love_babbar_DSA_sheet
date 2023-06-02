# [Nth catalan Number](https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a number N. The task is to find the Nth catalan number. </br>
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

### Input_output
Input: N = 5 </br>
Output: 42

## Algorithm
- Initialize a vector 'dp' of size n+1
- Set dp[0] and dp[1] equals to 1, as these are the base cases.
- Iterate from i=2 to n, then in inner loop iterate from j= 0 to i-1 and calculate dp[i] such that
```
dp[i]+=dp[j]*dp[i-j-1]
```
- Return dp[n], which represents the nth catalan number

Time Complexity : O(n<sup>2</sup>) </br>
Space Complexity : O(n)

