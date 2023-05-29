solution{
    private:
    void dfs(int node, vector<bool>& visited, vector<int> adj[], stack<int>& st){
        // mark the current node visited
        visited[node]=true;
        // recursively call dfs for every adjacent neighboring node
        for(auto it: adj[node]){
            if(visited[node]==false) dfs(it,visited,adj,st);
        }
        // push the current node into stack
        st.push(node);
    }
    
    public:
    // Function to return the list containing verticles in Topological sort
    vector<int> topoSort(int V,vector<int> adj[]){
        // created visited vector
        vector<bool> visited(V,false);

        // stack to store the topological sort
        stack<int> st;

        // call the DFS for every unvisited node
        for(int i=0;i<V;i++){
            if(visited[i]==false) dfs(i,visited,adj,st);
        }

        // store the result in vector
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};