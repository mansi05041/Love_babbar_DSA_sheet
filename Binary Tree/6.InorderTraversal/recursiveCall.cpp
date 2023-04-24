class solution{
    public:
    // Function to call recursive function
    void RecursiveInorder(TreeNode* root, vector<int> &inorder){
        // edge case
        if(root==NULL) return;
        // call the recursive function for left child
        RecursiveInorder(root->left,inorder);
        // push the root node
        inorder.push_back(root->val);
        // call the recursive function for right child
        RecursiveInorder(root->right,inorder);
    }
    // Function to get inorder Traversal
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> inorder;
        // call the recursive function
        RecursiveInorder(root,inorder);
        return inorder;
    }
};