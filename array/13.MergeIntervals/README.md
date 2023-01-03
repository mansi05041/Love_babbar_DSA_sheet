# [Merge Intervals](https://leetcode.com/problems/merge-intervals/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

### Input_output
Input :intervals = [[1,3],[2,6],[8,10],[15,18]]</br>
Output : [[1,6],[8,10],[15,18]] </br>

## Algorithm
- sort the intervals
- intialize a temp = intervals[0]
- iterate through the other intervals if temp[1]>=i[0] then update temp[1]=max(temp[1],i[1]) or else push the temp into answer and update temp.
- push the final interval into answer

Time complexity: O(nlogn) </br>
Space complexity: O(n)
