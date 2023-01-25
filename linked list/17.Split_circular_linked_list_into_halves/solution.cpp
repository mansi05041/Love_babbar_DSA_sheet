/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

void splitList(Node* head, Node** head1_ref, Node** head2_ref){
    // if no node present 
    if(head==NULL) return;

    Node* slow=head;
    Node* fast=head;
    // for odd nodes fasr->next == head and for even nodes fast->next-next==head
    while (fast->next!=head && fast->next->next!=head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    // for even nodes , move fast one step forward
    if(fast->next->next==head) fast=fast->next;

    // set head1_ref
    *head1_ref=head;

    // set head2_ref
    if(head->next!=NULL) *head2_ref=slow->next;

    // connect fast with head2_ref
    fast->next=slow->next;

    // connect slow with head1_ref
    slow->next=head;
}