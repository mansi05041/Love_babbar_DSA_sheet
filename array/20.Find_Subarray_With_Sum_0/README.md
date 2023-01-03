# [Find Subarray with sum equals to 0]()

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

### Input_output
Input:[4, 2, -3, 1, 6]</br>
Output: True

## Algorithm

### Brute Force Approach
- In nested loop find the subarray with sum equals to zero
```
for i=0 to n-1:
    sum=0
    for j=i to n-1:
        sum+=arr[j]
        if(sum==0) then => return(true)
return(false)
```

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Using Set
- Store the prefix sum in Set in each iteration.
- if prefix sum is already present in set then return true

Time Complexity: O(n)</br>
Space Complexity: O(n)