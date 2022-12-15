# [Move all negative numbers to beginning and positive to end](https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers. </br>


### Input_output
Input - {-12,11,-13,-5,6,-7,5,-3,-6} </br>
Output - {-12,-13,-5,-7,-3,-6,11,6,5}

## Algorithm

### Naive Approach
- sort the array

Time Complexity :O(nlogn) </br>
Space Complexity : O(1)

### Two pointer Approach
- intialize left =0 , right = n-1
- repeat the steps while left<=right </br>
i) if the left and right elements are negative then increment left. </br>
ii) if the left element is positive and the right is negative then swap it , increment left and decrement right.</br>
iii) if both the elements are positve then increment right </br>
iv) else increment left and decrement right. </br>

Time Complexity: O(n) </br>
Space Complexity: O(1)