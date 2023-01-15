# [Median of 2 sorted arrays of equal size](https://www.geeksforgeeks.org/median-of-two-sorted-arrays/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Write an algorithm to find the median of the array obtained after merging the 2 arrays(i.e. array of length 2n). The complexity should be O(log(n))

### Input_output
Input: A={1,12,15,26,38}, B={2,13,17,30,45} </br>
Output: Median =16

## Algorithm

### Brute Force
- Use the merge procedure of merge sort.
- Keep track of count while comparing elements of two arrays.
- If count becomes n, we have reached the median.
- Take the average of the elements at indexes n-1 and n in the merged array.

Time Complexity: O(n)</br>
Space Complexity: O(1)

### comparing the medians of two arrays
- calculate the medians of A and B array as m1 and m2 respectively.
- If m1 and m2 both are equal then we return m1 or m2
- If m1 is greater than m2, then median is present in one of the below two subarrays.
(i) In A array from start element to m1 </br>
(ii) In B array from m2 to last element </br>
- If m2 is greater than m1, then the median is present in one of the below two subarrays,
(i) from m1 to last element of A array </br>
(ii) from start element to m2 of B array </br>
- Repeat the above process until size of both the subarrays becomes 2.
- If Size of the two arrays is 2 then median is calculated as (max(A[0],B[0])+min(A[1],B[1]))/2

Time Complexity: O(logn)</br>
Space Complexity: O(logn)
