# [Edit Distance](https://practice.geeksforgeeks.org/problems/edit-distance3702/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two strings s and t. Return the minimum number of operations required to convert s to t.
The possible operations are permitted:</br>
- Insert a character at any position of the string.
- Remove any character from the string.
- Replace any character from the string with any other character.

### Input_output
s = "geek", t = "gesek" </br>
Output: 1 </br>
Explanation: One operation is required inserting 's' between two 'e's of s.

## Algorithm

### Memorization
- calls the solve function that takes i, j (current positions in s1 and s2 strings), dp table and the strings.
- The base case are checked first. If either string is exhausted, the remaining characters in the other string need to be deleted, so it will return index+1
- If the subproblem is already solved, the value is retrieved from the dp.
- If the characters at the current positions 'i' and 'j' are equal then no operation is needed. Recursively solve for the next positions(i-1 and j-1)
- If the characters at the current positions are different, three operations are possible: insertion, deletion and substitution. Recursively for each operation and choose the minimum result.
- Store the minimum result in the dynamic programming table.

Time Complexity : O(n*m) </br>
Space Complexity : O(n*m) 

### Tabulation
- Create a 2D dp matrix of size (n+1) x (m+1) and initialize all cells to 0
- base case: set dp[i][0] = i and dp[0][j] = j, if the string is empty.
- Iterate through the dp table
    - if s[i-1] equals to t[j-1] assign dp[i][j]= dp[i-1][j-1]
    - else assign dp[i][j] = 1+ min of all three operations.
- Return dp[n][m]

Time Complexity : O(n*m) </br>
Space Complexity : O(n*m) 