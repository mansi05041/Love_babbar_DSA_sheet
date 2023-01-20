# [Find the first node of loop in linked list](https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop. If a loop is present return the node data of the first node of the loop else return -1.

## Algorithm

### using Hashing
- store the current node if it is not present in hash table.
- If the node is already present there then return node's info.
- If we get NULL then return -1

Time Complexity: O(N)</br>
Space Complexity: O(N)

### using two pointer approach
- Intialize slow and fast , pointing to head
- slow will take one step forward whereas fast will take two steps untill fast , slow or fast-> next becomes NULL.
- If slow==fast then break the loop.
- Then if the loop is present set slow = head , then check slow==fast results true then return the node's info.

Time Complexity: O(N) </br>
Space Complexity: O(1)