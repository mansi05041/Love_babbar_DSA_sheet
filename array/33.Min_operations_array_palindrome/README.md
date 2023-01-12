# [Minimum swaps and K together](https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of positive integers. We need to make the given array a ‘Palindrome‘. </br>
The only allowed operation is “merging” (of two adjacent elements). Merging two adjacent elements means replacing them with their sum. The task is to find the minimum number of merge operations required to make the given array a ‘Palindrome‘.

### Input_output
Input: arr[] = {26, 5, 7, 26} </br>
Output : 1 </br>
Explanation: merge 5 and 7  in array

## Algorithm
- Using two pointer aproach
- intialize i=0 and j=n-1
- iterate untill i<=j
(i) if arr[i]>arr[j] then decrement j and update arr[j]=arr[j]+arr[j+1] </br>
(ii) else if arr[i]< arr[j] then increment i and update arr[i]=arr[i]+ arr[i-1] </br>
(iii) else increment i and decrement j. </br>

Time Complexity : O(n)</br>
Space Complexity : O(1)
