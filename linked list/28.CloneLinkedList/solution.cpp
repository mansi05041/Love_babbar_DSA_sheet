/* Linked list */
/*
struct Node{
    int data;
    Node* next;
    Node* arb;
    Node(int  x){
        data=x;
        next=NULL;
        arb=NULL;
    }
}
*/

class solution{
    public:
    Node* copyList(Node* head){
        Node* curr = head;
        Node* nextPtr;

        // new node inserted after every node
        while(curr){
            nextPtr = curr->next;
            curr->next = new Node(curr->data);
            curr->next->next = nextPtr;
            curr = nextPtr;
        }

        // attach the random pointers
        curr = head;
        while(curr){
            if(curr->next){
                curr->next->arb = curr->arb ? curr->arb->next : curr->arb;
            }
            curr = curr->next ? curr->next->next : curr->next;
        }

        // seperate original and clone linked list
        curr =head;
        Node* clone = head->next;
        nextPtr = clone;
        while(curr && clone){
            curr->next = curr->next ? curr->next->next : curr->next;
            clone->next = clone->next ? clone->next->next : clone->next;
            curr = curr->next;
            clone = clone->next;
        }

        return nextPtr;
    }
};