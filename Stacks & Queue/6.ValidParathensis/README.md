# [Parenthesis Checker](https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
For example, the function should return 'true' for exp = '[()]{}{[()()]()}' and 'false' for exp = '[(])'.

### Input_output
Input : {([])} </br>
Output : true

## Algorithm
 
- Using Stack perform operation for every bracket on the following conditions.
    - if stack is empty, push the bracket.
    - else if the obtained bracket is right bracket and top of stack has left bracket of same type then pop it from stack.
    - else push the bracket
- return stack.empty()

Time Complexity: O(N)  </br>
Space Complexity: O(N)
