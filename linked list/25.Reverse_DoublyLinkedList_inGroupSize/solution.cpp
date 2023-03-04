/*
struct Node {
    int data;
    Node *next, *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
*/

// function to insert node at the begining
void PushlinkedList(Node** head_ref, Node* newNode){
    newNode->prev = NULL;
    newNode->next = (*head_ref);
    if((*head_ref)!=NULL){
        (*head_ref)->prev = newNode;
    }
    (*head_ref) = newNode;
}

// function to reverse the nodes in group of given size in doubly linkedlist
Node* reverseInGroupSize(Node* head,int k){
    Node* curr = head;
    Node* nextPtr = NULL;
    Node* newHead = NULL;
    int count =0;

    // reverse first k group
    while(curr!=NULL && count<k){
        nextPtr = curr->next;
        PushlinkedList(&newHead,curr);
        curr = nextPtr;
        count++;
    }

    // if next group is there
    if(nextPtr!=NULL){
        head->next = reverseInGroupSize(nextPtr,k);
        head->next->prev = head;
    }

    return newHead;
}