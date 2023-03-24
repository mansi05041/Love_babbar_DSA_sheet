# [Reverse a Stack using Recursion](https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a stack St. You have to reverse the stack using recursion.

## Input_output
Input : St = {3,2,1,7,6} </br>
Output : {6,7,1,2,3}

## Algorithm
- Hold all the values in Function call Stack untill the stack becomes empty.
- When stack becomes empty, insert all held items one by one at the bottom of the stack.

Time Complexity: O(n<sup>2<</sup>>) <br />
Space Complexity: O(n)