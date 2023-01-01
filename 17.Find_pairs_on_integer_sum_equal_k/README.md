# [Find pairs of integer sum equals to K](https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of N integers, and a number sum, the task is to find the number of pairs of integers in the array whose sum is equal to sum.

### Input_output
Input: nums = [1, 5, 7, -1] , k=6</br>
Output: 2 </br>
Explanation: Pairs with sum 6 are (1,5) and (7,-1)

## Algorithm

### Brute Force
- In nested loop find total pairs whose sum is equal to k
```
    for i=0 to n:
        for j=i+1 to n:
            if(nums[i]+nums[j]==k):
                count++
```

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(1)

### Using Hashing
- Intialize an Unordered map.
- In single loop check the frequency of k-nums[i] in the map, if present then increment the count variable by its frequency.
- After traversal return the count

Time Complexity: O(n)</br>
Space Complexity: O(n)