# [Rearrange the Array in alternating positive and negative items with O(1) space]()

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by a negative and vice-versa maintaining the order of appearance. </br>
If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear at the end of the array.

### Input_output
Input:[-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]</br>
Output: [-5, 5, -2, 2, -8, 4, 7, 1, 8, 0]

## Algorithm

### Naive Approach
- Store the negative and positive elements in different data structures.
- Then Rearrange into array

Time Complexity: O(n) </br>
Space Complexity: O(n)

### Shift negatives first and then rearrange
- Shift all the negative values to the end in O(n) time. 
- Swap next position elment at even position from next negative element.

Time Complexity: O(n)</br>
Space Complexity: O(1)