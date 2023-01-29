/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
                int data;
                Node *next;
                Node(int data)
                {
                        this->data = data;
                        this->next = NULL;
                }
        };

*****************************************************************/
Node* deleteFromEnd(Node* head, Node* secondLast){
    secondLast->next=head;
    return head;
}

Node* deleteFromBeg(Node* head){
    // if only one node present
    if(head->next==head) return NULL;

    Node* temp=head;
    Node* second=head->next;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=second;
    return second;
}

Node* deleteNode(Node* head,int key){

    // if no node is present in linked list
    if(head==NULL) return NULL;

    // if the first node is to be deleted
    if(head->data==key) return DeleteFromBeg(head);

    Node* curr=head;
    Node* prev;
    while (curr->next!=head)
    {
        if(curr->data!=key){
            prev=curr;
        }
        else{
            prev->next=curr->next;
            return head;
        }
        curr=curr->next;
    }
    
    // if the last node to be deleted
    if(curr->next==head && curr->data==key) return DeleteFromEnd(head,prev);

    return head; // unchanged linked list
}