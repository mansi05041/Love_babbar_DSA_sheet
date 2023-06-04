class solution{
    private:
    // function to maintain the stack using dfs traversal
    void dfs_stack(int node, vector<int>& visit,vector<vector<int>>& adj,stack<int>& st){
        // mark the node visited
        visit[node]=1;
        // iterate over the adjacent neighbors
        for(auto it: adj[node]){
            if(!visit[node]) dfs_stack(it,visit,adj,st);
        }
        // push the node into stack
        st.push(node);
    }
     // function for dfs traversal
    void dfs(int node, vector<int>& visit,vector<vector<int>>& adj){
        // mark the node visited
        visit[node]=1;
        // iterate over the adjacent neighbors
        for(auto it: adj[node]){
            if(!visit[node]) dfs(it,visit,adj);
        }
    }

    public:
    // function to find the number of strongly connected components
    int kosaraju(int V,vector<vector<int>>& adj){
        // stack to store the nodes according to functioning time
        stack<int> st;

        // visited array
        vector<int> visited(V,0);

        // step 1: maintain the stack using dfs 
        for(int i=0;i<V;i++){
            if(visited[i]==0) dfs_stack(i,visited,adj,st);
        }

        // step 2: reverse the edges
        vector<vector<int>> adjT(V);
        for(int i=0;i<V;i++){
            // unmark the nodes visited
            visited[i]=0;
            for(auto it: adj[i]){
                adjT[it].push_back(i);
            }
        }

        // step 3: calculate the number of strongly connected components
        int sc=0;
        while (!st.empty())
        {
            // remove the top node from stack
            auto node = st.top();
            st.pop();

            // check if it is not visited
            if(!visited[node]){
                // increment the number of components
                sc++;
                dfs(node,visited,adjT);
            }
        }
        
        return sc;
    }

};