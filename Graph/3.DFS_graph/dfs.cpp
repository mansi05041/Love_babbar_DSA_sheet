class solution{
    private:
    // Function that recursively call dfs to Perform traversal
    void dfs(int node,vector<int> adj[],vector<int> &visit,vector<int> &DFS){
        // visit the node
        visit[node]=1;
        // push the node into DFS
        DFS.push_back(node);
        // call the recursively fucntion dfs for the adjacent neighbors
        for(auto it:adj[node]){
            if(visit[it]==0) dfs(it,adj,visit,DFS);
        }
    }
    public:
    // Function to return a list containing the DFS traversal of the graph
    vector<int> dfsOfGraph(int V,vector<int> adj[]){
        vector<int> visit(V,0);
        vector<int> DFS;
        // call the dfs fucntion for the starting node - 0
        dfs(0,adj,visit,DFS);
        return DFS;
    }
};