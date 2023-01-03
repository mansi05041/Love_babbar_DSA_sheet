# [Sort array having 0's, 1's and 2's without using any sort algorithm](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order. </br>


### Input_output
Input - {0,2,1,2,0} </br>
Output - {0,0,1,2,2}

## Algorithm

### Naive Approach
- count the total number of zeros, ones and twos
- from the below code snippet
```
for each i from 0 to n-1:
    while(ones!=0):
        arr[i]=0
        ones--;
    while(ones!=0):
        arr[i]=1
        ones--;
    while(twos!=0):
        arr[i]=2
        twos--;

```

Time complexity : O(n<sup>2</sup>) </br>
Space complexity : O(1)

### three pointer approach
- initialize zero_ptr=0, one_ptr=0 and two_ptr=n-1
- In the loop, it will execute while one_ptr<=two_ptr </br>
i) if(arr[one_ptr]==0) </br>
   then swap(arr[one_ptr],arr[zero_ptr]) and increment one_ptr and zero_ptr. </br>
ii) else if (arr[one_ptr]==2) </br>
    then swap(arr[one_ptr],arr[two_ptr]) and decrement two_ptr </br>
iii) else increment the one_ptr </br>

Time complexity : O(n) </br>
Space complexity : O(1) 
