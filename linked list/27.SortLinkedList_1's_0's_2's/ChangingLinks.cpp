/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class solution{
    public:

    // Function to sort the linked list
    Node* segregate(Node* head){
        // if no node or single node present in the linked list
        if(head==NULL || head->next==NULL) return head;

        // Intializing the node head
        Node* zeroHead=new Node(-1);
        Node* oneHead=new Node(-1);
        Node* twoHead=new Node(-1);
        // Initializing the node tail
        Node* zeroTail = zeroHead;
        Node* oneTail = oneHead;
        Node* twoTail = twoHead;

        Node* curr=head;
        while (curr)
        {
            if(curr->data==0){
                zeroTail->next=curr;
                zeroTail=curr;
            }
            else if(curr->data==1){
                oneTail->next=curr;
                oneTail=curr;
            }
            else{
                twoTail->next=curr;
                twoTail=curr;
            }
            curr=curr->next;
        }
        
        // join the three linked list
        zeroTail->next=oneHead->next ? oneHead->next : twoHead->next;
        oneTail->next = twoHead->next;
        twoTail->next = NULL;

        // update the modified head
        head=zeroHead->next;

        // delete the dummy nodes
        delete zeroHead;
        delete oneHead;
        delete twoHead;

        return head;
    }
};