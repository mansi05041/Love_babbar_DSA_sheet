/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(!head || k==1) return head;
        node* dummy=new node(-1);
        dummy->next=head;
        node* curr=dummy;
        node* next_ptr=dummy;
        node* prev=dummy;
        int count=0;
        // count total nodes in linked list
        while(curr){
            curr=curr->next;
            count++;
        }
        while (next_ptr)
        {
            curr=prev->next;
            next_ptr=curr->next;
            int to=count>k? k: count-1;
            for(int i=1;i<to;i++){
                curr->next=next_ptr->next;
                next_ptr->next=prev->next;
                prev->next=next_ptr;
                next_ptr=curr->next;
            }
            prev=curr;
            count-=k;
        }
        return dummy->next;
    }
};


