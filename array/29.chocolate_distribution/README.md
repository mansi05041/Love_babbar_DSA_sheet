# [Chocolate Distribution]()

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that : </br>
1. Each student gets exactly one packet.</br>
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum

### Input_output
Input: N=8, M=5 </br>
A = {3, 4, 1, 9, 56, 7, 9, 12} </br>
Output: 6 </br>
Explanation: The minimum difference between 
maximum chocolates and minimum chocolates 
is 9 - 3 = 6 by choosing following M packets :
{3, 4, 9, 7, 9}.

## Algorithm
- sort the array
- Intialize diff as INT_MAX
- Interate through loop find the minimum diff.

Time Complexity: O(nlogn)</br>
Space Complexity: O(1)