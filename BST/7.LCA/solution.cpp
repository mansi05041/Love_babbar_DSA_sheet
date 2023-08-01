// function to find the lowest common ancestor in a BST
class Solution{
    public:
    Node* LCA(Node* root, int n1,int n2){
        // base case
        if(!root || root->data==n1 || root->data==n2) return root;

        Node* left = LCA(root->left,n1,n2);
        Node* right = LCA(root->right,n1,n2);

        if(!left) return right;
        else if(!right) return left;
        else return root;
    }
};