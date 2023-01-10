# [Smallest Subarray sum greater than x](https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value. If such a subarray do not exist return 0 in that case.

### Input_output
Input: {1, 4, 45, 6, 0, 19}, X=51 </br>
Output: 3

## Algorithm

### Brute Force approach
- Use nested loops, the outer loop picks the starting element and the inner loop considers all elements from current to right side.
- wherever the sum of elements b/w current start and end becomes greater than the given value, update the result and length( minimum one )

```
int min_len=n+1
for i to 0 to n-1:
    curSum=arr[i]
    if(curSum>X) return 1; // the first element itself is greater
    for j to i+1 to n-1:
        curSum+=arr[j]
        if(curSum>X and (j-i+1)<min_len) min_len =end-start+1
return min_len
```
Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Using sliding window
- Initialize curSum=0 and min_len=n+1
- add elements to the subarray untill the sum is less than X
- If the sum is greater than X, remove elements from the start of the current subarray. 
- Maintain the minimum length of array.

Time Complexity: O(n)</br>
Space Complexity: O(1)