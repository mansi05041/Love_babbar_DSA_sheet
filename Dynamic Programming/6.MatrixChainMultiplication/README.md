# [Matrix Chain Multiplication](https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications. </br>
The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).

### Input_output
Input: N = 5, arr = {40, 20, 30, 10, 30} </br>
Output: 26000

## Algorithm

### Memorization
- Call solve takes parameters i(start index), j(end index) , arr(matrix) and dp(for memorization).
- Base case if i==j, that means there is only one matrix in the chain, so return 0.
- if the result for the subproblem is already computed, return the dp[i][j]
- initialize minSteps to a larger value
- Iterate k from i to j-1 for splitting the matrix chain at different positions.
    - Calculate the number of steps required to multiply the matrices from i to k and from k+1 to j and the current multiplication
    - update minSteps
- store the result minSteps in the memorization table and then return it.

Time Complexity : O(n<sup>3</sup>) </br>
Space Complexity : O(n<sup>2</sup>) </br>
<code>Note : This will lead to Time Limit Error</code>

### Tabulation
- Create a 2d vector of size NXN 
- set the base case dp[i][i]=0
- iterate from i=N-1 down to 1 (outer loop)
    - iterate j = i+1 to N-1 (inner loop)
    - intialize minSteps to a large value
    - Perform partioning loop k=i to j-1
    - calculate the steps of multiplying matrices from i to k , from k+1 to j and the current multiplication.
    - update the minSteps
    - after the partioning update dp[i][j] = minSteps
- Return dp[1][N-1]

Time Complexity : O(n<sup>3</sup>) </br>
Space Complexity : O(n<sup>2</sup>) 