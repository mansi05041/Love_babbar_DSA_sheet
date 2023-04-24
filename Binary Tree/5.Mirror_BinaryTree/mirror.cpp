class Solution{
    public:
    TreeNode* invertTree(TreeNode* root){
        // if the root is null
        if(!root) return root;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        root->left = invertTree(right);
        root->right = invertTree(left);
        return root;
    }
};