# [Best Time to buy and sell stocks](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array prices where prices[i] is the price of a given stock on the ith day.</br>
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.</br>
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

### Input_output
Input: nums = [7,1,5,3,6,4] </br>
Output: 5 </br>
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

## Algorithm

### Brute Force
- In nested loop find the maximum profit of stock
```
    for i=0 to n:
        for j=i+1 to n:
            profit=arr[j]-arr[i]
            max_profit=max(profit,max_profit)
```

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Single Pass approach
- Intialize min_price = arr[0] and max_price = 0
- In loop if arr[i]< min_price then update min_price.
- else arr[i]-min_price>max_price then update max_price.

Time Complexity: O(n)</br>
Space Complexity: O(1)