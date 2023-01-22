/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
    public:
    Node* reverse(Node* head){
        // if only one node is present
        if(head->next==NULL) return head;
        Node* curr=head;
        Node* prev=NULL;
        Node* next_ptr;
        while (curr)
        {
            next_ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next_ptr;
        }
        return prev;
    }
    Node* addOne(Node* head){
        // if no node present
        if(head==NULL) return head;
        // Reverse the linked list
        head=reverse(head);
        int carry=1;
        int ans;
        Node* curr=head;
        while (curr)
        {
            ans=curr->data+carry;
            curr->data=ans%10;
            carry=ans/10;
            curr=curr->next;
        }
        // again reverse the linked list
        head=reverse(head);
        // if carry is not equal to 0
        while(carry){
            Node* carry_ptr = new Node(carry);
            carry_ptr->next=head;
            head=carry_ptr;
            carry/=10;
        }
        return head;
    }
};
