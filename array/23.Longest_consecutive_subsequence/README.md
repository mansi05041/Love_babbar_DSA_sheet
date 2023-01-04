# [Find longest consecutive subsequence](https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Find the length of Longest consecutive Subsequence present in the array

### Input_output
Input:{2,6,1,9,4,5,3} </br>
Output: 6

## Algorithm

### Naive Approach
- Sort the array and find the consecutive subsequence
Time Complexity: O(nlogn) </br>
Space Complexity: O(1)

### Using Set
- Use Set to hash all the elements
- Check the each possible sequence from the start 
- if current element is the starting element of sequence, then update the maximum length of sequence.
Time Complexity: O(n) </br>
Space Complexity: O(n) 