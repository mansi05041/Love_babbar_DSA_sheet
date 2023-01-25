/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

bool isCircular(Node* head){
    Node* curr=head;
    while (curr)
    {
        if(curr->next==head) return true;
        curr=curr->next;
    }
    return false;
}