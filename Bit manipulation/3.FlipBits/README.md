# [Bit Difference](https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.


### Input_output
Input - A = 10 , B = 20
Output - 4

## Algorithm

- Intialize bitdiff = 0
- increment bitdiff if the remainder of both A and B are not same on dividing with 2 until A or B becomes 0 and update A and B accordingly.
- return bitdiff

Time complexity : O(n) </br>
Space complexity : O(1)
