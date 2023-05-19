class Solution{
    public:
    void solve(Node* root,Node* &prev){
        if(!root) return;
        // left recursion
        solve(root->left,prev);
        if(prev!=NULL) prev->next = root;
        prev = root;
        // right recursion
        solve(root->right,prev);
    }
    void populateNext(Node* root){
        Node* prev = NULL;
        solve(root,prev);
    }
};