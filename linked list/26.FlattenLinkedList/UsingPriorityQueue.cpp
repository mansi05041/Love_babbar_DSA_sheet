/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

// comparator
struct CompareNode{
    bool operator()(Node* head1,Node* head2){
        return head1->data>head2->data;
    }
}

/* Function which return the root of the flattened linked list */
Node* flatten(Node* root){
    priority_queue<Node*,vector<Node*>,CompareNode> pq;

    // pushing main nodes into the min Heap
    while(root){
        pq.push(root);
        root=root->next;
    }

    // maintaining the resultant linked list
    Node* newHead = new Node(-1);
    Node* newTail = newHead;

    // Extracting Resultant Linked list
    while (!pq.empty())
    {
        Node* obtainNode = pq.top();
        pq.pop();
        Node* nextNode = obtainNode->bottom;
        obtainNode->bottom = NULL;
        newTail->bottom = obtainNode;
        newTail=newTail->bottom;

        // push the nextNode into min Heap
        if(nextNode){
            pq.push(nextNode)
        }
    }
    
    return newHead->bottom;
}