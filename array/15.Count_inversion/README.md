# [Count Inversion](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers. Find the Inversion Count in the array.</br>
In an array two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

### Input_output
Input: nums = [2,4,1,3,5] </br>
Output: 3

## Algorithm

### Brute Force
- In nested loop, find the inversion count 
```
    for i=0 to n-1:
        for j=i+1 to n-1:
            if(a[i]>a[j] and i<j):
                inversion_count++
    
```

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Using Merge Sort
- Divide the array into two equal or almost halves in each step until the base case is reached.
- for merge function intialize i an j as the index of the halves.
- if a[i]>a[j] then there are (mid-i) inversions because left and right subarrays are sorted, so all the elements in the left subarray will be greater than a[j].

Time complexity: O(nlogn) </br>
Space complexity: O(1)
