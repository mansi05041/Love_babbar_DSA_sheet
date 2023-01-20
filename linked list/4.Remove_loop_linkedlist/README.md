# [Remove Loop in Linked List](https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list of N nodes such that it may contain a loop.Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop.

## Algorithm

### using Hashing
- store the current node if it is not present in hash table and set prev node reference to current node.
- If the node is already present there then set prev->next = NULL

Time Complexity: O(N)</br>
Space Complexity: O(N)

### using two pointer approach
- Intialize slow and fast , pointing to head
- slow will take one step forward whereas fast will take two steps untill fast , slow or fast-> next becomes NULL.
- If slow==fast then break the loop.
- Then if the loop is present set slow = head , then compare the slow and fast , remove the loop

Time Complexity: O(N) </br>
Space Complexity: O(1)