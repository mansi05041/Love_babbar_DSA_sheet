class solution{
    public:
    bool isPossible(int N,vector<pair<int,int>> &prerequisites){

        // create the adjacency list
        vector<vector<int>> adj(N);
        for(auto it: prerequisites){
            adj[it.first].push_back(it.second);
        }

        // calculate the indegree 
        vector<int> indegree(N);
        for(auto it: prerequisites){
            indegree[it.second]++;
        }

        // queue to store the nodes that have zero indegree
        queue<int> q;
        for(int i=0;i<N;i++){
            if(indegree[i]==0) q.push(i);
        }

        // topoSort : maintains the topological sort
        vector<int> topoSort;

        while (!q.empty())
        {
            auto node = q.front();
            q.pop();
            // add the current node into topoSort
            topoSort.push_back(node);

            // iterate over all the neighbors
            for(auto it: adj[node]){
                // decrement the indegree
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return topoSort.size()==N;
    }
};