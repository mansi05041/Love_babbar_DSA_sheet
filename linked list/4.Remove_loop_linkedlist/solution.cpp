/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/
class Solution{
    public:
    void removeLoop(Node* head){
        // if no node is present or single node is there
        if(head==NULL || head->next==NULL) return;

        // set the pointers
        Node* slow=head;
        Node* fast=head;

        // detect the loop
        while(fast || fast->next){
            // slow take 1 step & fast will take 2 steps
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }

        // if the loop is there then remove it
        if(slow==fast){
            // set slow as head
            slow=head;

            if(slow==fast){
                // loop starts at head
                while(fast->next!=slow) fast=fast->next;
            }
            else{
                // reach to the previous node that connects with the start of loop
                while(slow->next!=fast->next){
                    slow=slow->next;
                    fast=fast->next;
                }
            }
            // set the next of previous node that is fast as NULL, to remove loop
            fast->next=NULL;
        }
    }
};