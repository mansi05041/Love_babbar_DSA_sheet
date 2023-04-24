class Solution{
    public:
    // Function to get the preorder traversal
    vector<int> PreorderTraversal(TreeNode* root){
        // use stack
        stack<TreeNode*> st;
        vector<int> preorder;
        // if the root is null, then return empty array
        if(root==NULL) return{};
        TreeNode* temp = root;
        // push the root into stack
        st.push(temp);
        while (!st.empty())
        {
            // push the top node from stack to traversal array
            temp = st.top();
            preorder.push_back(temp->val);
            st.pop();
            // if the right child exists, then push into stack
            if(temp->right) st.push(temp->right);
            // if the left child exists, then push into stack
            if(temp->left) st.push(temp->left);
        }
        return preorder;
    }
};