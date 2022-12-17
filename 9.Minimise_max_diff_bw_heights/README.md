# [Minimize the maximum difference between heights](https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given the heights of N towers and a value of K, Either increase or decrease the height of every tower by K (only once) where K > 0. After modifications, the task is to minimize the difference between the heights of the longest and the shortest tower and output its difference.</br>


### Input_output
Input - {1, 15, 10}, k=6 </br>
Output - 5 </br>
Explanation: after modification we get array {7,9,4} , max difference is 9-4 = 5.

## Algorithm

- sort the array
- check the current index tower has the maximum height or not by comparing it with a[n]-k.
- similarly, find the shortest tower and minimize the difference.

Time complexity: O(nlogn) </br>
Space complexity: O(1)
