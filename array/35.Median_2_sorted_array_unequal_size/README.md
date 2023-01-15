# [Median of 2 sorted arrays of unequal size](https://leetcode.com/problems/median-of-two-sorted-arrays/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.</br>
The overall run time complexity should be O(log (m+n)).
### Input_output
Input:nums1 = [1,3], nums2 = [2] </br>
Output: 2.00000

## Algorithm

### brute force
- Merge the both arrays into third one
- Find the median of merged array

Time Complexity: O((N+M)Log(N+M)) </br>
Space Complexity: O(N+M)

### Merge the array w/o space
- If value M+N is odd then there is only one median, else the median is average of elements at index (M+N)/2 and (M+N)/2-1
-  Initialize i and j with 0.
- if nums1[i]< nums2[j] then increment i otherwise increment j , also increment the count
- Store (M+N)/2 and (M+N)/2-1 and return the median.

Time Complexity: O(M+N) </br>
Space Complexity: O(1)

### Using Binary Search
- The size of nums1 should be less than size of nums2
- Initalize total = M+N and half=(total+1)/2
- Apply binary Search in nums1
(i) Initialize low=0 and high=M </br>
(ii) Repeat the below given steps while low<=high </br>
(iii) Initialize cut1 that is the middle of nums1 i.e.,
cut1 = low+(high-low)/2 </br>
(iv) Initialize cut2 for nums2 such that cut2=half-cut1 </br>
(v) Now obtained the values of left1(left index of left side of nums1), left2(left index of left side of nums2) and similarly right1 and right2(right indexes of left sides of arrays) </br>
(vi) if(left1>right2 and left2<=right1) update high as cut1-1 </br>
(vii) else if(left1<=right2 and left2>right1) update low as cut1+1 </br>
(viii) else then return the median </br>

Time Complexity: O(Log(M+N)) </br>
Space Complexity: O(1)
