/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution{
    public:
    int findFirstNode(Node* head){
        // if there is no node or only one node is present
        if(head==NULL || head->next==NULL) return(-1);
        Node* slow=head;
        Node* fast=head;
        while (fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if (slow==fast)
        {
            slow=head;
            while (slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast->data;
        }
        return(-1);
    }
};