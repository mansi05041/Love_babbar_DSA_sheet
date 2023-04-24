class solution{
    public:
    vector<int> inorderTraversal(TreeNode* root){
        // use stack
        stack<TreeNode*> st;
        vector<int> inorder;
        TreeNode* temp = root;
        while (temp!=NULL || !st.empty())
        {
            // traverse to the left
            while (!temp)
            {
                st.push(temp);
                temp=temp->left;
            }
            // push the top node of stack into traversal array
            temp = st.top();
            inorder.push_back(temp->val);
            st.pop();
            // traverse to the right
            temp = temp->right;
        }
        return inorder;
    }
};
