/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2){
    Node* curr1=head1;
    Node* curr2=head2;
    // head and tail used to track the intersection linked list
    Node* head=NULL;
    Node* tail=NULL;
    while (curr1 && curr2)
    {
        // move the node whose value is smaller
        if(curr1->data<curr2->data) curr1=curr1->next;
        else if(curr1->data>curr2->data) curr2=curr2->next;
        else{
            // create the new node
            Node* n=new Node(curr1->data);
            if(head==NULL) head=tail=n;
            else{
                tail->next=n;
                tail=n;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
    }
    return head;
}