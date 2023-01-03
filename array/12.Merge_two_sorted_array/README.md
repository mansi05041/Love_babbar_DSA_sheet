# [Merge two sorted array without using extra space](https://leetcode.com/problems/merge-sorted-array/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.</br>
Merge nums1 and nums2 into a single array sorted in non-decreasing order. </br>
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

### Input_output
Input : nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3  </br>
Output : [1,2,2,3,5,6]</br>

## Algorithm

- Initialize i = m-1 (tracks the element of nums1) and j= n-1 (tracks the element of nums2)
- repeat steps while (i>=0 and j>=0) </br>
i) if nums1[i]> nums2[j] then set nums1[i+j+1] = nums1[i] , increment i
ii) else set nums1[i+j+1] = nums2[j], increment j
- if elements of nums2 still left then merge into nums1 accordingly

Time complexity: O(m+n) </br>
Space complexity: O(1)
