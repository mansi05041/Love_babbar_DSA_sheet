class Solution{
    private:
    // Function to check the cycle
    bool checkCycle(int node, vector<int> adj[], vector<int> &visit, vector<int> &dfsVisit){
        // mark the current node visited in both arrays
        visit[node]=1;
        dfsVisit[node]=1;
        // iterate over its adjacent nodes
        for(auto it:adj[node]){
            if(visit[it]==0){
                if(checkCycle(it,adj,visit,dfsVisit)) return true;
            }
            else if(dfsVisit[it]) return true;
        }
        // unmark the dfsVisit
        dfsVisit[node]=0;
        return false;
    }
    public:
    // Function to detect cycle in a directed graph
    bool isCyclic(int V, vector<int> adj[]){
        // maintain two arrays
        vector<int> visit(V,0);
        vector<int> dfsVisit(V,0);

        // iterate on 0 to V-1 nodes
        for(int i=0;i<V;i++){
            if(visit[i]==0){
                // not visited yet
                if(checkCycle(i,adj,visit,dfsVisit)) return true;
            }
        }
        return false;
    }
};