# [Coin Change Problem](https://leetcode.com/problems/coin-change/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.</br>
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1. </br>
You may assume that you have an infinite number of each kind of coin. </br>


### Input_output
Input - coins = [1,2,5], amount = 11 </br>
Output - 3

## Algorithm

- Intialize a vector dp of size of amount+1 with -1
- set dp[0]=0
- iterate from i=1 to amount
- for each i intialize minCoins with INT_MAX
- iterate through each coin in coins
    - check if i-coin is a valid index and dp[i-coin] is not equal to -1.
    - if both conditions are true, then update minCoins to the minimum value between 'minCoins' and 'dp[i-coin]+1'
- After iterating through all the coins check if the minCoins are unchanged , if not set to -1.
- After the loop , return dp[amount] which represents the minimum number of coins required to make the given amount

Time complexity : O(amount*coins.size()) </br>
Space complexity : O(amount+1)
