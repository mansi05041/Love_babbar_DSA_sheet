class Solution{
    public:
    vector<int> bottomView(Node* root){
        // queue to store the node and the horizontal distance
        queue<pair<int,Node*>> q;
        // map to store the unique values of horizontal distance with the node's data
        map<int,int> mp;
        // push the root into queue 
        q.push({0,root});
        while (!q.empty())
        {
            int hd = q.front().first;
            auto node = q.front().second;
            q.pop();
            // update or insert into map
            mp[hd]=node->data;
            // if the left child exists push into queue with hd-1 value
            if(node->left) q.push({hd-1,node->left});
            // if the right child exists push into queue with hd+1 value
            if(node->right) q.push({hd+1,node->right});
        }
        vector<int> arr;
        for(auto it: mp){
            arr.push_back(it.second);
        }
        return arr;
    }
};