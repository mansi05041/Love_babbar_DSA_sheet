class Solution{
    private:
    // Function to get Topological order
    vector<int> TopologicalSort(int V,vector<int> adj[]){
        // calculate the indegree
        vector<int> indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }

        // queue to store the nodes that have zero indegree
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }

        // get the topological order
        vector<int> topoSort;
        while (!q.empty())
        {
            // remove the front node from the queue
            auto node = q.front();
            q.pop();
            // add the node into topoSort
            topoSort.push_back(node);

            // iterate over the adjacent neighbors
            for(auto it: adj[node]){
                // decrement the indegree
                indegree[it]--;
                // check if the indegree is zero, then push into queue
                if(indegree[it]==0) q.push(it);
            }
        }
        
        return topoSort;
    }

    public:
    // Function to find the order of Alien dictionary
    string findOrder(string dict[],int N,int K){
        // create the adjacency list
        vector<int> adj[K];

        // Get the DAG
        for(int i=0;i<N-1;i++){
            // compare the strings
            str1 = dict[i];
            str2 = dict[i+1];
            int len = min(str1.size(),str2.size());
            // find the edge
            for(int j=0;j<len;j++){
                if(str1[j]!=str2[j]){
                    // add to the adjacency list
                    adj[str1[j]-'a'].push_back(str2[j]-'a');
                    break;
                }
            }
        }

        // get the topological sort
        vector<int> topoSort = TopologicalSort(K,adj);

        // get the result
        string ans ="";
        for(auto it: topoSort){
            ans+=char(it+'a');
        }

        return ans;
    }

};