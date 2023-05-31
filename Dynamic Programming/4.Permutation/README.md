# [Permutation](https://leetcode.com/problems/permutations/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

### Input_output
Input: nums = [1,2,3] </br>
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

## Algorithm
- create an empty vector of vectors called 'result' to store the permutations
- check the base case: if the size of nums is less than or equal to 1, return a vector containing 'nums' itself as there are no elements to permute.
- Iterate over each element in 'nums' usinf a for loop.
- Inside the loop, copy the given vector.
- Remove the element at the index i from the copy vector using erase function.
- Recursively call the permute function to generate permutations of the remaining elements.
- Store the resulting permutations in the variable perms
- Iterate over perms and append nums[i] in each vector.
- Then append the obtained vector into the resultant vector.
- After the loop completes return the resultant vector.

Time Complexity : O(n!) </br>
Space Complexity : O(n!)

