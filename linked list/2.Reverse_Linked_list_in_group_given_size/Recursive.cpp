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
        if(head==NULL) return NULL;
        node* current=head;
        node* next_ptr=NULL;
        node* prev=NULL;
        int count=0;
        while(current!=NULL && count<k){
            next_ptr=current->next;
            current->next=prev;
            prev=current;
            current=next_ptr;
            count++;
        }
        if(next_ptr!=NULL) head->next=reverse(next_ptr,k);
        return prev;
    }
};


