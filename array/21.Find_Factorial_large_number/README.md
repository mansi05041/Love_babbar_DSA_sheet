# [Find Factoriall of a large subarray](https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer N, find its factorial.

### Input_output
Input: 5</br>
Output: 120

## Algorithm
- To store the factorial vector will be used.
- first push back the value 1 into vector.
- In Outer loop from i=2 to N, there is two inner loop
- First inner loop from j=0 to vector size , multiply each vec[j] with i and add carry to product obtained. Update carry and vec[j].
- Second inner loop makes the value of carry 0 and complete the factorial
- Reverse the vector

Time Complexity: O(N<sup>2</sup>) </br>
Space Complexity: O(1)