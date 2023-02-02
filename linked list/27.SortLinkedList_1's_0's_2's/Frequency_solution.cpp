/*
 
  Node is defined as
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

    // Function to sort a linked list of 0s, 1s and 2s
    Node* segregate(Node* head){
        int zero=0;
        int one=0;
        int two=0;
        Node* curr=head;
        // count the frequencies
        while (curr)
        {
            if(curr->data==0) zero++;
            else if(curr->data==1) one++;
            else two++;
            curr=curr->next;
        }

        curr=head;
        while (curr)
        {
            while (zero)
            {
                curr->data=0;
                zero--;
                curr=curr->next;
            }
            while (one)
            {
                curr->data=1;
                one--;
                curr=curr->next;
            }
            while (two)
            {
                curr->data=2;
                two--;
                curr=curr->next;
            }
        }
        return head;
    }
};