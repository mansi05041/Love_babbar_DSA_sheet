// structure of node
/* 
struct Node {
    int data;
    struct Node* next;
};
*/

// function to get the last node
struct Node* getTail(struct Node* curr){
    while (curr!=NULL && curr->next!=NULL)
    {
        curr=curr->next;
    }
    return curr;
}

// function to perform partition based on pivot node
struct Node* partition(struct Node* head, struct Node* end, struct Node** newHead, struct Node** newEnd){
    struct Node* pivot = end;
    struct Node* prev = NULL;
    struct Node* cur = head;
    struct Node* tail = pivot;

    while(cur!=pivot){
        if(cur->data<pivot->data){
            // update the newHead and newEnd
            if((*newHead)==NULL) (*newHead)=cur;

            prev = cur;
            cur=curr->next;
        }
        else{
            // if the current node is greater than pivot
            // move cur node to the next of tail and change tail
            if(prev){
                prev->next=cur->next;
            }
            struct Node* tmp = curr->next;
            cur->next= NULL;
            tail->next =cur;
            tail=cur;
            cur=tmp;
        }
    }

    // if the pivot data is the smallest then pivot becomes head
    if((*newHead)==NULL) (*newHead)=pivot;
    // upadate newEnd to the current last node
    (*newEnd) = tail;

    return pivot;
}
// function to perform quick sort recurisively
struct Node* quick_sort_Recur(struct Node* head, struct Node* end){
    // base condition
    if(head==NULL || head==end) return head;

    Node* newHead = NULL;
    Node* newEnd = NULL;

    // partition the list, newHead and newEnd will be updated 
    struct Node* pivot = partition(head,end,&newHead,&newEnd);

    // if the pivot is the smallest element no need to recur for the left part
    if(newHead!=pivot){
        struct Node* tmp = newHead;
        while (tmp->next!=pivot)
        {
            tmp=tmp->next;
        }
        tmp->next=NULL; // tmp is the last node for left linked list

        // Recur for the list befor the pivot
        newHead = quick_sort_Recur(newHead,tmp);

        // change the next of left node of the left half to pivot
        tmp=getTail(newHead);
        tmp->next = pivot;
    }
    // Recur for the list after the pivot element
    pivot->next = quick_sort_Recur(pivot->next,newEnd);
    return newHead;
}
// performing quick sort
void quick_sort(struct Node** headRef){
   (*headRef)=quick_sort_Recur(*headRef,getTail(*headRef));
}