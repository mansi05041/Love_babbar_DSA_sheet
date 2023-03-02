/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

// global variable
long long int mod = pow(10,9)+7;

// get number from linked list
long long GetNumber(Node* head){
    long long ans=0;
    while (head)
    {
        ans=(ans*10+head->data)%mod;
        head=head->next;
    }
    return ans;
}

long long multiplyTwoLists(Node* l1, Node* l2){
    long long ans1 = GetNumber(l1);
    long long ans2 = GetNumber(l2);
    return (ans1*ans2)%mod;
}