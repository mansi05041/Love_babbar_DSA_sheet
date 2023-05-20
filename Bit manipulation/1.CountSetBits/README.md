# [Count set bits in an integer](https://practice.geeksforgeeks.org/problems/set-bits0143/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a positive integer N, print count of set bits in it. 


### Input_output
Input - 6 </br>
Output - 2

## Algorithm

- Intialize count =0
- check if the N on dividing by 2 gives 1, if so increment the count until N becomes 0, update N accordingly.
- Return count

Time complexity : O(n) </br>
Space complexity : O(1)
