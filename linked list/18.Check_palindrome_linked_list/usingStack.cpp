/*
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
    // Function to check whether the list is palindrome
    bool isPalindrome(Node* head){
        // no node or single node is present in linked list
        if(head==NULL || head->next==NULL) return true;
        stack<Node*> st;
        Node* curr=head;
        while (curr)
        {
            // push every node in stack
            st.push(curr);
            curr=curr->next;
        }
        curr=head;
        while (curr)
        {
            Node* temp = st.top();
            st.pop();
            // compare the pop node with current node
            if(temp->data!=curr->data) return false;
            curr=curr->next;
        }
        return true;
    }
};
