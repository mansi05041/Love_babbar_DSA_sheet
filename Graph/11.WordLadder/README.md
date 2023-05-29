# [Word Ladder](https://leetcode.com/problems/word-ladder/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
A transformation sequence from word beginWord to word endWord using a dictionary wordList is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that: </br>
- Every adjacent pair of words differs by a single letter.
- Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.
sk == endWord </br>
Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.

## Algorithm
- Create a set 'wordSet' and intialize it with all the words in 'wordList'
- if 'endWord' is not present in 'wordSet', return 0
- Create a queue and push 'beginWord' into the queue
- Intialize 'depth' to 0, which represents the current depth of the traversal.
- While the queue is not empty, increment the depth by 1 and iterate the queue until its size reduce to 0.
    - Get the front word from the queue and remove it.
    - For each character position in current word, iterate over all the possible letters.
    - create a temporary word by replacing the character at the current position with the new letter.
    - if current word and temporary word are same then continue to the next iteration.
    - if temporary word is equals to endWord, then return depth +1 , as we found the shortest path.
    - if temporary word is already present in the wordSet, then push it into the queue and remove it from 'wordSet'.

Time Complexity: O(M*N<sup>2</sup>)
Space Complexity: O(N) </br>
<code>N : the total words in 'wordList' </br>
M : the average length of the words </code>

