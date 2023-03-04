/* a node of the doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;

    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
*/

// comparator 
struct compareNode{
    bool operator()(struct Node* p1, struct Node* p2){
        return p1->data > p2->data;
    }
};

// function to sort a k sorted doubly linked list
struct Node* sort_k_DoublyLinkedList(struct Node* head,int k){
    // if list is empty
    if(head==NULL) return head;

    // creation of min heap 
    priority_queue<Node*, vector<Node*>, compareNode> pq;

    // insert (k+1) elments into MinHeap
    for(int i=0;head!=NULL && i<=k;i++){
        pq.push(head);
        head=head->next;
    }

    // Maintaining resultant LinkedList
    struct Node* newHead = new Node(-1);
    struct Node* newTail = newHead;
    
    // updating the resultant linkedList
    while(!pq.empty()){
        newTail->next = pq.top();
        pq.top()->prev = newTail;
        newTail = pq.top();
        pq.pop();
        if(head!=NULL){
            pq.push(head);
            head=head->next;
        }
    }

    return newHead->next;
}