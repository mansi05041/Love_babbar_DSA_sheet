class Solution{
    public:
    // Function to return Breadth First Traversal of given graph
    vector<int> bfsOfGraph(int V,vector<int> adj[]){
        vector<int> visit(V,0);
        vector<int> BFS;
        queue<int> q;
        // visit the first node and push into queue
        visit[0]=1;
        q.push(0);
        // visit the all nodes
        while(!q.empty()){
            int node=q.front();
            BFS.push_back(node);
            q.pop();
            // add the neighbors of node
            for(auto it: adj[node]){
                if(visit[it]==0){
                    visit[it]=1;
                    q.push(it);
                }
            }
        }
        return BFS;
    }
};