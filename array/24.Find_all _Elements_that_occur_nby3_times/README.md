# [Majority Element ||](https://leetcode.com/problems/majority-element-ii/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

### Input_output
Input:[3,2,3] </br>
Output: [3]

## Algorithm

### Naive Approach 
- sort the elements
- In loop count the frequency of repeated elements if we get more than n/3 then push that element into resultant vector.
Time Complexity: O(nlogn)</br>
Space Complexity: O(1)

### using hash map
- use Map to store the element as key and its frequency as value.
- Using loop find the elements that have the frequency more than n/3.
Time Complexity: O(n) </br>
Space Complexity: O(n)
