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
    Node* divide(int N, Node* head){
        // if single or no node is present in linked list
        if(head==NULL || head->next==NULL) return head;

        Node* evenHead = new Node(-1);
        Node* oddHead = new Node(-1);
        Node* evenTail = evenHead;
        Node* oddTail = oddHead;
        Node* curr = head;

        while (curr)
        {
            if(curr->data%2==0){
                // even node
                evenTail->next = curr;
                evenTail=evenTail->next;
            }
            else{
                // odd node
                oddTail->next=curr;
                oddTail=oddTail->next;
            }
            curr=curr->next;
        }
        evenTail->next = oddHead->next;
        oddTail->next = NULL;
        return evenHead->next;
    }
};