/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Function to count total nodes
int Total_nodes(Node* head){
    int count=0;
    Node* curr=head;
    while (curr)
    {
        curr=curr->next;
        count++;
    }
    return count;
}

// Function to Shorten the greater linked list
Node* shorten_linked_list(int diff,Node* head){
    while (diff)
    {
        head=head->next;
        diff-;
    }
    return head;
}

// Function to find intersection point in Y shaped linked list
int intersectionPoint(Node* head1, Node* head2){
    int n1=Total_nodes(head1);
    int n2=Total_nodes(head2);
    if(n1>n2){
        // head1 linked list is greater
        head1= shorten_linked_list(n1-n2,head1);
    }
    else{
        // head2 linked list is greater
        head2= shorten_linked_list(n2-n1,head2);
    }
    while (head1 && head2)
    {
        if(head1==head2) return head1->data;
        head1=head1->next;
        head2=head2->next;
    }
    return(-1); // if no intersection point is present
}