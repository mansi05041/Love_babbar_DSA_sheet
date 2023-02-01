/*
class Node
{
    public:
        char data;
        Node* next;
        Node* pre;
    Node(int data)
    {
        this->data=data;
        pre=NULL;
        next=NULL;
    }
};

*/

Node* RotateDLL(Node* head, int N){
    if(head ||head->next ||N) return head;

    // convert into Circular
    Node* last=head;
    while (last->next)
    {
        last=last->next;
    }
    last->next=head;
    head->prev=last;

    // reach to the N+1 node and make it head
    int count=1;
    while (count<=N)
    {
        head=head->next;
        last=last->next;
        count++;
    }
    head->prev=NULL;
    last->next=NULL;
    
    return head;    
}