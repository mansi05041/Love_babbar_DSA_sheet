# [Non Repeating Numbers](https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers. Return in increasing order.


### Input_output
Input - N = 2 </br>
arr[] = {1, 2, 3, 2, 1, 4} </br>
Output - 3 4

## Algorithm

- Intialize xorResult =0
- Iterate through each element in the given vector and find the xor.
- Find the rightmost set bit as xorResult & ~(xorResult-1)
- Initialize num1 and num2 to 0
- Iterate through each element in the nums vector
    - check if (n & rightmostSetBit) is non zero, on getting true set num1 = num1 ^ n.
    - otherwise set num2 = num2 ^ n
- Return the vector containing the two distinct numbers in increasing order

Time complexity : O(n) </br>
Space complexity : O(1)
