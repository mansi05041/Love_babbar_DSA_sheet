#include <bits/stdc++.h> 
/***********************************************

    Following is the class structure of the Node class:

    class DLLNode
    {
        public:
        int data;
        DLLNode *next;
        DLLNode *prev;
    };

***********************************************/

// Function to count pairs equal to target value
int Count_two_pair_Sum(DLLNode* left,DLLNode* right,int target){
    int count =0;
    while (left && right && left!=right && right->next!=left)
    {
        if(left->data+right->data==target){
            count++;
            left=left->next;
            right=right->next;
        }
        else if(left->data+right->data>target){
            right=right->prev;
        }
        else{
            left=left->next;
        }
    }
    return count;
}

// Function to count triplets that sum equals to X
int countTriplets(DLLNode* head,int x){
    // if no node is present in linked list
    if(head==NULL) return 0;

    DLLNode* first=head;
    DLLNode* last=head;

    // iterate the last to the end of the end of linked list
    while (last->next)
    {
        last=last->next;
    }

    // find the total count of triplets
    int count=0;
    while (first)
    {
        count+=Count_two_pair_Sum(first->next,last,x-first->data);
        first=first->next;
    }
    return count;
}