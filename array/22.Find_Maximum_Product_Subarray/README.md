# [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer array nums, find a subarray that has the largest product, and return the product.</br>
The test cases are generated so that the answer will fit in a 32-bit integer.

### Input_output
Input: [2,3,-2,4]</br>
Output: 6

## Algorithm
- Intialize max_product = v[0], min_product = v[0] and result = v[0]
- Using for loop from i=1 to v.size() follow the below steps
(i) if the elemnent is negative swap max_product and min_product. </br>
(ii) update max_product by comparing v[i] and v[i]*max_product. </br>
(iii) update min_product by comparing v[i] and v[i]*min_product. </br>
(iv) update result by comparing result and max_product.</br>
Time Complexity: O(n) </br>
Space Complexity: O(1)