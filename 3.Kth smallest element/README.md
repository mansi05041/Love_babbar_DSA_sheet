# [Kth smallest element](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.


### Input_output
<strong>Input</strong>:</br>
N=6 </br>
arr[] = {7,10,4,3,20,15} </br>
k=3 </br>
Output - 7

## Algorithm

### Using sort
- sort the array
- return the result at arr[k-1]

Time complexity : O(n logn) </br>
Space complexity : O(1) 

### Using quickselect algorithm
- related to quicksort algorithm

```
function quickselect(arr[],left,right,k)
    if left == right
        return arr[left]
    
    // select a pivot index b/w left and right

    pivotIndex = partition(arr,left,right,pivotIndex)

    if k == pivotIndex
        return arr[k]
    else if k<pivotIndex
        right = pivotIndex -1
    else
        left = pivotIndex +1
        
```

Time complexity: O(n) with worst case o(n<sup>2</sup>) </br>
Space complexity: O(1)