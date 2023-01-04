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

- Track the maximum profit from the first buy and sell.
- Obtain the next maximum profit after the first sell.
- Add the both profits to get result.

Time Complexity: O(n) </br>
Space Complexity: O(1)