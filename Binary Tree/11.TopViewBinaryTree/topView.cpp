class Solution{
    public:
    // Function to return a list of nodes visible from the top View from left to right in a binary tree
    vector<int> topView(Node* root){
        // queue to store the node and horizontal distance
        queue<pair<int,Node*>> q;
        // map to store the unique value of horizontal distance as key with node value as pair
        map<int,int> mp;
        // push the root into queue as horizontal distance 0
        q.push({0,root});
        while (!q.empty())
        {
            int hd = q.front().first;
            auto node = q.front().second;
            q.pop();
            // check if the value is already present in the map or not
            if(mp.find(hd)==mp.end()){
                mp[hd]=node->data;
            }
            // check if left child present
            if(node->left) q.push({hd-1,node->left});
            // check if right child present
            if(node->right) q.push({hd+1,node->right});
        }
        // resultant array
        vector<int> arr;
        for(auto it: mp){
            arr.push_back(it.second);
        }
        return arr;
    }
};