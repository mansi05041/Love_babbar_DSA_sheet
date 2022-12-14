# [Find Minimum and Maximum value of Array](https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Maximum and minimum of an array using minimum number of comparisons. </br>


### Input_output
Input - {22,14,8,17,35,3} </br>
Output - Minimum element : 3 , Maximum element : 35

## Algorithm

### Using Linear search
- initialize min = min(arr[0],arr[1]) and max = max(arr[0],arr[1])
- In loop , starting from i= 2 </br>
i) if (arr[i]> max) then -> max = arr[i] </br>
ii) if (arr[i]< min) then -> min = arr[i] </br>

Time complexity : O(n) </br>
Space complexity : O(1)