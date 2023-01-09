# [Trapping Rain Water](https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

### Input_output
Input:{3,0,0,2,0,4} </br>
Output: 10

## Algorithm

### Brute Force
- intialize trap_water=0
- Iterate array from left to right 
(i) Intialize left_max=0 and right_max=0 </br>
(ii) Iterate from the current element to the beginning of array and update the left_max. </br>
(iii) Iterate from the current element to the end of array updating right_max. </br>
(iii) Add min(left_max,right_max)-height[i] to trap_water</br>
Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Dynamic Programming
- Find the Maximum height of bar from the left end upto an index i in the array left_max
- Find the Maximum height of bar from the right end upto an index i in the array right_max.
- Iterate over the height array and update trap_water as: 
trap_water+=min(left_max[i],right_max[i])-height[i]
Time Complexity: O(n)</br>
Space Complexity: O(n)

### Two pointer Approach
- Intialize max_left=height[0] and max_right=height[size-1]
- Intialize left=1 and right=size-2
- while left< right then,
(i) if height[left]>=left_max, update the left_max </br>
(ii) else add left_max-height[left] to ans </br>
(iii) increment left
- else
(i) if height[right]>=right_max, update right_max </br>
(ii) else add right_max-height[right] to ans </br>
(iii) decrement from right
Time Complexity: O(n) </br>
Space Complexity: O(1)