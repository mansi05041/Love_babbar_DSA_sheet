/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    public:
    Node* removeLastToFront(Node* head){
        // if there is no node or single node
        if(head==NULL || head->next==NULL) return head;
        Node* second_last = head; // track the second last node
        Node* last = head->next;  // track the last node
        while(last->next!=NULL){
            second_last=second_last->next;
            last=last->next;
        }
        second_last->next=NULL; // join the second last node with NULL
        last->next=head; // connect last at front of linked list
        head=last;
        return head;
    }
};