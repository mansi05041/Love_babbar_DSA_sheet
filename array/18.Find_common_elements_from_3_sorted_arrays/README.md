# [Find Common Elements from 3 sorted Arrays](https://practice.geeksforgeeks.org/problems/common-elements1132/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

### Input_output
Input: </br>
a1 = [1, 5, 10, 20, 40, 80]</br>
a2 = [6, 7, 20, 80, 100]</br>
a3 = [3, 4, 15, 20, 30, 70, 80, 120]</br>
Output: 20,80 </br>

## Algorithm

### Delete First Duplicated values 
- Delete the duplicate from each array.
- Find the frequency , whoever frequency is greater than 3 will be count in answer.

Time Complexity: O(n) </br>
Space Complexity: O(n) for storing frequency

### Using Hashing for removing duplicates
- Intialize an Unordered map.
- For first array store it into map if the frequency is already 0 in map.
- Similarly for second array store it into if the frequency is 1 in map.
- Finally for third array increment the frequrncy if it is 2 in map.
- Check the elements whoose frequency is equal to 3 , those elements are the answers.

Time Complexity: O(n)</br>
Space Complexity: O(n)