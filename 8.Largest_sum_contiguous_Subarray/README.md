# [Find Largest Sum Contiguous Subarray](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum. </br>


### Input_output
Input - {1,2,3,-2,5} </br>
Output - 9

## Algorithm

### Brute Force Approach
- Using nested loops, outer loop will keep track of start element of subarray and inner loop will add the elements and keep the track of maxsum.

```
Subarray(){
    sum=0
    maxsum=INT_MIN
    for i=0 to n-1 (steps=1){
        for j=i+1 to n-1 (steps=1){
            sum+=arr[j]
            maxsum=max(maxsum,sum)
        }
        sum=0
    }
}

```
Time complexity : O(n<sup>2</sup>) </br>
Space complexity : O(1)

### Kadanes Algorithm
- Initialize cursum = arr[0] and maxsum = arr[0], where cursum keeps track of running sum and maxsum keeps the maximum sum of contiguous sub-array. 
- Repeat the given steps for i=1 to n-1 </br>
i) if the cursum >=0 , then add arr[i] and cursum
ii) else set cursum = arr[i]
iii) update the maxsum

Time Complexity: O(n) </br>
Space Complexity: O(1)