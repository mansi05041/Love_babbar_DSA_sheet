class solution{
    public:
    // Function to return the level order traversal of a tree
    vector<int> levelOrder(Node* node){
        queue<Node*> q;
        vector<int> levelTraversal;
        // push the root
        q.push(node);
        while (!q.empty())
        {
            auto Qnode = q.front();
            q.pop();
            levelTraversal.push_back(Qnode->data);
            // if the left child exists
            if(Qnode->left) q.push(Qnode->left);
            // if the right child exists
            if(Qnode->right) q.push(Qnode->right);
        }
        return levelTraversal;
    }
};