# [Minimum number of Jumps to reach end of array](https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of N integers arr[] where each element represents the max length of the jump that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.</br>


### Input_output
Input : {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}  </br>
Output : 3 </br>
Explanation: First jump from 1st element to 2nd element with value 3. Now, from here we jump to 5th element with value 9, 
and from here we will jump to the last

## Algorithm

- Intialize maxReach = arr[0] stores the maximum reachable index in the array, jump = 0 stores the number of jumps and step = arr[0] stores the number steps we can still take in the current jump.
- In loop first check if we reach at the end of array then return jump.
- update the maxReach, that is maximum of maxReach and i+arr[i] (the number of steps we can take from the current position).
- decrement the steps
- if (steps==0) then increment the jump , check if i not exceed the maxReach (True : return -1) and update step equals to maxReach-i

Time complexity: O(n) </br>
Space complexity: O(1)
