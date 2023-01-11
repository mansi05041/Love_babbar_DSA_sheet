# [Three way Partitioning of an array around a given value](https://practice.geeksforgeeks.org/problems/three-way-partitioning/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.</br>
1) All elements smaller than a come first.</br>
2) All elements in range a to b come next.</br>
3) All elements greater than b appear in the end.</br>
The individual elements of three sets can appear in any order. You are required to return the modified array.

### Input_output
Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}  , a = 14 , b = 20 </br>
Output: arr[] = {1, 5, 4, 2, 1, 3, 14, 20, 20, 98, 87, 32, 54}


## Algorithm
- Intialize start=0 and end=n-1
- Traverse the array, if an element is less than a then swap it with the element at index start and increase the value start by 1.
- If an element is greater than b then swap it with the element present at index end and decrease the value of end by 1.

Time Complexity : O(n)</br>
Space Complexity : O(1)
