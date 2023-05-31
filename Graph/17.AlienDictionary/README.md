# [Alien Dictionary](https://practice.geeksforgeeks.org/problems/alien-dictionary/1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.

## Algorithm
- Create the empty adjacency list to represent Directed Acyclic Graph(DAG).
- Iterate through the dictionary of words, from i=0 to N-2
    - set str1 = dict[i] and str2 = dict[i+1]
    - Find the minimum length between str1 and str2
    - Iterate through each character and check if str1[j] and str2[j] are not equal, then update the adjacencey list and break the loop.
- call the TopologicalSort function to get the topological order of characters.
- convert the topological order into a string and return it.


Time Complexity: O(N+K) </br>
Space Complexity: O(K) </br>
<code>N : number of words in the dictionary </br>
K : number of characters in the alphabet </code>

