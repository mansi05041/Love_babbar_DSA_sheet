/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Function to find intersection point in Y shaped linked lists
int intersectionPoint(Node* head1, Node* head2){
    // connect head1 with the end of linked list to implement circular linked list
    Node* slow = head1;
    while (slow->next)
    {
        slow=slow->next;
    }
    slow->next=head1; // it will acts as loop for head2 linked list
    slow=head2;
    Node* fast = head2;
    while(fast || fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) break;
    }
    // we detect the loop now find the first node of loop
    if(slow==fast){
        slow=head2;
        while(slow!=fast){
            slow=slow->nxet;
            fast=fast->next;
        }
        return fast->data;
    }
    return(-1); // if no intersection point obtained
}