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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Initialize a prev to track previous node
        ListNode* prev = NULL;
        while(head){
            // move head untill it becomes NULL
            ListNode* next_ptr=head->next; // track the next node of head
            head->next=prev;
            prev=head;
            head=next_ptr;
        }
        return prev;
    }
};