vector<int> reverseLevelOrder(Node* root){
    // Using Queue and stack
    queue<Node*> q;
    stack<int> st;
    // push the root
    q.push(root);
    vector<int> reverseTraversal;
    while (!q.empty())
    {
        auto node = q.front();
        q.pop();
        st.push(node->data);
        // if the right root exists
        if(node->right) q.push(node->right);
        // if the left root exists
        if(node->left) q.push(node->left);
    }
    while (!st.empty())
    {
        reverseTraversal.push_back(st.top());
        st.pop();
    }
    return reverseTraversal;
}