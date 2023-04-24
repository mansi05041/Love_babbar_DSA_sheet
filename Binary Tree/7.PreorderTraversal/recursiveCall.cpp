class Solution{
    public:
    // Recursive call for Preorder traversal
    void RecursivePreorder(TreeNode* root, vector<int> &preorder){
        // if root is null, then return null
        if(!root) return;
        // push the root into traversal array
        preorder.push_back(root->val);
        // call the recursive function for left child
        RecursivePreorder(root->left,preorder);
        // call the recursive function for right child
        RecursivePreorder(root->right,preorder);
    }
    // Function to get the Preorder Traversal
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> preorder;
        RecursivePreorder(root,preorder);
        return preorder;
    }
};