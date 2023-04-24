class Solution{
    public:
    // Recursive Postorder Function
    void RecursivePostorder(TreeNode* root, vector<int> &postorder){
        // if root is null, then return
        if(!root) return;
        // call the recursive function for left child
        RecursivePostorder(root->left,postorder);
        // call the recursive function for right child
        RecursivePostorder(root->right,postorder);
        // push the value into the traversal array
        postorder.push_back(root->val);
    }
    // Function to perform Postorder traversal
    vector<int> postorderTraversal(TreeNode* root){
        vector<int> postorder;
        RecursivePostorder(root,postorder);
        return postorder;
    }
};