class Solution{
    public:
    // Function to store the zig zag order traversal of a tree
    vector<int> zigZagTraversal(Node* root){
        // edge case
        if(root==NULL) return {};
        vector<int> ans;
        // queue to store the node
        queue<Node*> q;
        // push the root into queue
        q.push(root);
        // initialize variable that keep track of level
        bool isOddLevel = true;
        while (!q.empty())
        {
            // temporary vector to store the nodes at each level
            vector<int> levelOrder;
            int size = q.size();
            while (size--)
            {
                auto node = q.front();
                q.pop();
                // store it into levelOrder 
                levelOrder.push_back(node->data);
                // if the left child exists
                if(node->left) q.push(node->left);
                // if the right child exists
                if(node->right) q.push(node->right);
            }
            // if the level is even then reverse the temporary vector
            if(isOddLevel==false){
                reverse(levelOrder.begin(),levelOrder.end());
            }
            // append the levelOrder into resultant vector
            for(auto it: levelOrder){
                ans.push_back(it);
            }
            // flip the isOddLevel
            isOddLevel=!isOddLevel;
        }
        return ans;
    }
};