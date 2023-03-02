/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

clas Solution{
    public:

    // function to reverse the linked list
    Node* reverse(Node *head){
        Node* prev = NULL;
        Node* curr = head;
        Node* nextPtr;
        while (curr)
        {
            nextPtr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextPtr;
        }
        return prev;
    }

    // function to remove the nodes that have greater value on right
    Node* compute(Node* head){

        // base case: no node or single node
        if(head==NULL || head->next==NULL) return head;

        // reverse the linked list
        head=reverse(head);
        Node* curr = head;
        // maintain max in the linked list
        int maxNode = curr->data;
        while (curr->next)
        {
            if(curr->next->data>=maxNode){
                // update the max and curr
                max = curr->next->data;
                curr = curr->next;
            }
            else{
                // remove the curr
                curr->next = curr->next->next;
            }
        }

        // again reverse the linked list
        head = reverse(head);

        return head;
    }
};