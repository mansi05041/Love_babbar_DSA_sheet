# [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.

### Input_output
Input: N = 4
arr = {1, 5, 11, 5}
Output: YES

## Algorithm
- Calculate the total sum of all elements. 
- If the total sum is odd, return false since it is not possible to partition the array into two subsets with equal sums.

### Memorization
- Create a 2D vector of size n X sum+1 , sum = totalSum/2 and initialize all the elements of dp to -1.
- Call the recursive function that implements:
    - if the current sum is 0, return true since a subset with the target sum is found.
    - if the position is 0, check if the sum is equal to 'nums[0]' and return true if they match  return true.
    - if the result of the subproblem dp[pos][sum] is already computed, return the stored result.
    - Recursively call the solve function with two possiblities.
    - Exclude the current element and move to the previous position.
    - Include the current element and subtract it from the current sum
    - store the result in dp[pos][sum] and return the result.

Time Complexity : O(n*sum) </br>
Space Complexity : O(n*sum) 

### Tabulation
- Intialize the 2d dp array of size n+1 x sum+1
- set the base cases: dp[i][0] = true, indicating its always possible to achieve a sum of 0.
- Iterate over the dp array
    - if the current element nums[i-1] is greater than the target sum, set dp[i][j]=dp[i-1][j]
    - otherwise set dp[i][j]=dp[i-1][j]||dp[i][j-nums[i]]
- Return the value dp[n][sum]

Time Complexity : O(n*sum) </br>
Space Complexity : O(n*sum) 

