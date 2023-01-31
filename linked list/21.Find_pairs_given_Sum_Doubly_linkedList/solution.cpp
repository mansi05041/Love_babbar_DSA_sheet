/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution{
    public:
    vector<pair<int,int>> findPairsWithGivenSum(Node* head,int target){
        // if no node present in the linked list
        if(head==NULL) return{};
        Node* first=head;
        Node* last=head;

        // move last to the end of linked list
        while(last->next){
            last=last->next;
        }

        vector<pair<int,int>> result;
        // compare the first and last's sum with target
        while (first!=last && last->next!=first)
        {
            if(first->data+last->data==target){
                result.push_back({first->data,last->data});
                first=first->next;
                last=last->prev;
            }
            else if(first->data+last->data>target){
                last=last->prev;
            }
            else{
                first=first->next;
            }
        }
        return result;
    }
};