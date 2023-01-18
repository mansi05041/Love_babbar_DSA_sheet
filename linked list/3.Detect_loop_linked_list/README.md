# [Detect Loop in Linked List](https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.


## Algorithm

### using Hashing
- store the current node if it is not present in hash table.
- If the node is already present there then return true.

Time Complexity: O(N)</br>
Space Complexity: O(N)

### using two pointer approach
- Intialize slow and fast , pointing to head
- slow will take one step forward whereas fast will take two steps untill fast , slow or fast-> next becomes NULL.
- If slow==fast then return true.

Time Complexity: O(N) </br>
Space Complexity: O(1)