/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    public:
    Node* removeDuplicates(Node* head){
        unodered_set<int> s;
        Node* prev=NULL;
        Node* curr=head;
        while (curr)
        {
            if(s.find(curr->data)==s.end()){
                // element is not present in set
                s.insert(curr->data);
                prev=curr;
            }
            else{
                prev->next=curr->next;
            }
            curr=prev->next;
        }
        return head;
    }
};