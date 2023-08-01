# [Friends Pairing Problem](https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given N friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
Note: Since answer can be very large, return your answer mod 10^9+7.

### Input_output
Input: N = 3 </br>
Output: 4

## Algorithm

### Recursion
```
mod = pow(10,9)+7
helper(i):
    // base case
    if(i==1 || i==2) return i

    // single
    single = helper(i-1)%mod

    // paired
    paired = ((i-1)*helper(i-2)%mod)%mod

    return (single+paired)%mod
```

### Memorization
- create a dp of size n+1 initialized to -1
- after base case check if the problem is already solved, if yes return it.
- In the end of recursion function first save the result in dp then return it

Time Complexity : O(n) </br>
Space Complexity : O(n) + O(n)

### Tabulation
- set the base case dp[1]=1 and dp[2] =2
- Have the same dp used in memorization initialized to 0
- Iterate from i = 3 to n (inclusive) and use the same recursion logic
- return dp[n]

Time Complexity : O(n) </br>
Space Complexity : O(n) 

