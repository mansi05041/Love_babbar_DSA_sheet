/*
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

class Solution{
    public:

    // Function to merge Two sorted linked lists
    Node* merge2Lists(Node* head1, Node* head2){
        Node* head=NULL;
        Node* tail=NULL;
        while (head1 && head2)
        {
            if(head1->data<head2->data){
                if(head==NULL) head=tail=head1;
                else{
                    tail->next=head1;
                    tail=tail->next;
                }
                head1=head1->next;
            }
            else{
                if(head==NULL) head=tail=head2;
                else{
                    tail->next=head2;
                    tail=tail->next;
                }
                head2=head2->next;
            }
        }
        if(head1!=NULL) tail->next=head1;
        if(head2!=NULL) tail->next=head2;

        return head;
    }

    // Function to merge K sorted linked lists
    Node* mergeKLists(Node* arr[],int k){
        Node* firstL=arr[0];
        for(int i=1;i<k;i++){
            firstL=merge2Lists(firstL,arr[i]);
        }
        return firstL;
    }
};