# [Find Union and Intersection of array](https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two arrays a[] and b[] of size n and m respectively. The task is to find union and intersection between these two arrays. </br>


### Input_output
Input </br>
a[]={4,5,6,7}
b[]={4,3}
Output </br>  
union :{4,3,5,6,7} </br>
intersection:{4}

## Algorithm

### Using Map Structure
- store the all elements in map as key, and their frequency as value.
- iterate through map, the all keys are part of union
- those keys having value more than 1 are part of intersection

Time Complexity: O(n) </br>
Space Complexity: O(n)