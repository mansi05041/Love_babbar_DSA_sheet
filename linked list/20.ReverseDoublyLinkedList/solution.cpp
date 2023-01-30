/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

Node* reverseDLL(Node* head){
    // if no node is present in the linked list
    if(head==NULL) return NULL;

    // maintain the previous node
    Node* prev_ptr=NULL;
    while (head)
    {
        head->prev=head->next;
        head->next=prev_ptr;
        prev_ptr=head;
        head=head->prev;
    }
    // prev_ptr is the new head of reversed linked list
    return prev_ptr;
}