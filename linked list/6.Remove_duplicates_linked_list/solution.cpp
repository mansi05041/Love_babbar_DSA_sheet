/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node* removeDuplicates(Node* head){
    Node* curr=head;
    Node* prev=head;
    while (curr!=NULL)
    {
        if(curr->data!=prev->data){
            prev->next=curr;
            prev=curr;
        }
        curr=curr->next;
    }
    if(prev!=curr) prev->next=NULL;
    return head;
}