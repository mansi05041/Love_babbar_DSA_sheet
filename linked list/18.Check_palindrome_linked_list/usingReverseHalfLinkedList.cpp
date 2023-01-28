/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution{
    public:

    // Function to reverse the linked list
    ListNode* reverselist(ListNode* head){
        ListNode* prev=NULL;
        ListNode* next_ptr;
        while (head)
        {
            next_ptr=head->next;
            head->next=prev;
            prev=head;
            head=next_ptr;
        }
        return prev;
    }

    // Function to check if the linked list is palindrome or not
    bool isPalindrome(ListNode* head){
        // no node or single node is present
        if(head==NULL ||head->next==NULL) return true;

        // find the middle node
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        // store the middle node
        ListNode* mid=slow;
        // reverse the linked list from slow
        slow=reverselist(slow);
        // compare the slow and fast
        fast=head;
        while (fast!=mid->next && slow!=mid->next)
        {
            // mid->next = NULL
            if(fast->val!=slow->val) return false;
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};