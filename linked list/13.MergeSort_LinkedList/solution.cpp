/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution{
    public:
    
    // Function for merge the two sorted linked list
    Node* merge(Node* head1, Node* head2){
        Node* head=NULL;
        Node* tail=NULL;
        if(head1->data<=head2->data){
            head=tail=head1;
            head1=head1->next;
        }
        else{
            head=tail=head2;
            head2=head2->next;
        }
        while (head1 && head2)
        {
            if(head1->data<=head2->data){
                tail->next=head1;
                head1=head1->next;
            }
            else{
                tail->next=head2;
                head2=head2->next;
            }
            tail=tail->next;
        }
        if(head1!=NULL){
            tail->next=head1;
        }
        if(head2!=NULL){
            tail->next=head2;
        }
        return head;
    }

    // Function for finding middle node
    Node* getMiddleNode(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        while (slow->next && (fast && fast->next))
        {
           slow=slow->next;
           fast=fast->next->next;
        }
        return slow;
    }

    // Function for merge sort implementation
    Node* mergeSort(Node* head){
        // base case: if no node or single node present
        if(head==NULL || head->next==NULL) return head;

        // find the middle node
        Node* MiddleNode = getMiddleNode(head);

        // divide the linked list into two halves
        Node* head2=MiddleNode->next;
        MiddleNode->next=NULL;

        // call the mergeSort for the two halves
        Node* firstHalf = mergeSort(head);
        Node* secondHalf = mergeSort(head2);

        // call the merge function
        Node* newHead = merge(firstHalf,secondHalf);
        return newHead;
    }
};