class solution{
    private:
    // finding the min value
    int minValue(TreeNode* root){
        int minv = root->val;
        while(root->left){
            minv = root->left->val;
            root = root->left;
        }
        return minv;
    }
    public:
    TreeNode* deleteNode(TreeNode* root, int key){
        // if the root is null : base case
        if(!root) return root;
        // if the key is smaller than root's value
        if(key<root->val) root->left = deleteNode(root->left,key);
        // if the key is larger than root's value
        else if(key>root->val) root->right = deleteNode(root->right,key);
        // if the key is equal to root's value
        else{
            // root has no left child
            if(!root->left) return root->right;
            // root has no right child
            else if(!root->right) return root->left;
            else{
                // update the root value with minimum value at the right subtree
                root->val = minValue(root->right);
                // delete that node with minimum value
                root->right = deleteNode(root->right,root->val);
            }
        }
        return root;
    }
};