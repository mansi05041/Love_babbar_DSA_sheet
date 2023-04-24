class solution{
    public:
    // Function to perform Postorder Traversal
    vector<int> PostorderTraversal(TreeNode* root){
        // use stack
        stack<TreeNode*> st;
        vector<int> postorder;
        // if root is null then return empty array
        if(!root) return{};
        // push the root into stack
        st.push(root);
        while (!st.empty())
        {
            // push the top node of stack at front of traversal array
            TreeNode* temp = st.top();
            postorder.insert(postorder.begin(),temp->val);
            st.pop();
            // if right child exists then push into stack
            if(temp->right) st.push(temp->right);
            // if left child exists then push into stack
            if(temp->left) st.push(temp->left);
        }
        return postorder;
    }
};