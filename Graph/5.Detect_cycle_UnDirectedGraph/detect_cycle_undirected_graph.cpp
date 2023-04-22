class solution{
    private:
    // Function for DFS to detect cycle
    bool CycleDfs(int node, vector<int> adj[], vector<int> &visit, int parent){
        // marked the current node as visited
        visit[node]=1;
        // iterate all the adjacent nodes 
        for(auto it: adj[node]){
            if(visit[it]==0){
                // not visited yet
                if(CycleDfs(it,adj,visit,node)) return true;
            }
            else if(parent!=it) return true;
        }
        return false;
    }
    public:
    bool isCycle(int V, vector<int> adj[]){
        vector<int> visit(V,0);
        // iterate all the nodes 0 to V-1
        for(int i=0;i<V;i++){
            if(visit[i]==0){
                if(CycleDfs(i,adj,visit,-1)) return true;
            }
        }
        return false;
    }
};