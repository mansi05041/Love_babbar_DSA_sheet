/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution{
    struct Node* reverse(struct Node* head){
        // if there is no node or single node present in the linked list
        if(head==NULL || head->next==NULL) return head;
        Node* curr=head;
        Node* prev=NULL;
        Node* next_ptr;
        while (curr)
        {
            next_ptr=cur->next;
            curr->next=prev;
            prev=NULL;
            curr=next_ptr;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second){
        int carry=0;
        int ans=0;
        Node* head=NULL; // track the resultant linked list
        // reverse the both linked list
        first=reverse(first);
        second=reverse(second);
        while(first || second || carry){
            // add first's data if not null
            if(first!=NULL){
                ans=first->data;
                first=first->next;
            }
            // add second's data if not null
            if(second!=NULL){
                ans+=second->data;
                second=second->next;
            }
            // add carry if not 0
            if(carry){
                ans+=carry;
            }
            Node* num = new Node(ans%10);
            carry=ans/10; // update carry
            // join the num at the front of resultant linked list
            if(head==NULL) head=num;
            else{
                num->next=head;
                head=num;
            }
            ans=0; // update ans
        }
        return head;
    }
};