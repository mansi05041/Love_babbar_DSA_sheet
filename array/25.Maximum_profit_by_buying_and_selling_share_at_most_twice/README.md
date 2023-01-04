# [Maximum profit by buying and selling a share at most twice](https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given stock prices throughout the day, find out the maximum profit that a share trader could have made.

### Input_output
Input: price[] = {10, 22, 5, 75, 65, 80}</br>
Output: 87

## Algorithm
- Intialize four variables for first buy, first sell, second buy and second sell.
- Set first buy and second buy as INT_MIN and 
first and seconnd sell as 0.
- Iterate through the array and return the second sell as it will store the maximum profit.

Time Complexity: O(n) </br>
Space Complexity: O(1)