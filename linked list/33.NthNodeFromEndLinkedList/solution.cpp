/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to find the data of nth node from the end of a linked list
int getNthFromLast(Node* head, int n){
    if(head==NULL) return(-1);

    Node* fast = head;
    Node* slow = head;

    // Move fast to the Nth node
    for(int i=1;i<n;i++){
        fast=fast->next;
        if(!fast) return(-1);
    }

    // move both slow and fast
    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return(slow->data);
}