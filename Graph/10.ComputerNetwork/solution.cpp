class solution{
    void DFS(vector<vector<int>>& adj, vector<bool>& visited, int node){
        // mark the node visited
        visited[node]=true;
        for(auto it: adj[node]){
            // check if it is not mark as visited
            if(visited[node]==false){
                DFS(adj,visited,it);
            }
        }
    }

    int makeConnected(int n, vector<vector<int>> &connections){
        // boundary case : MST is not satisfy
        if(connections.size()<n-1) return -1;

        // visited array
        vector<bool> visited(n,false);

        // adjacency list
        vector<vector<int>> adj(n);

        // populate the adjacency list
        for(auto it: connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        // find the number of components
        int comp = 0;
        for(int i=0;i<n;i++){
            // check if it is not visited
            if(visited[i]==false){
                comp+=1;
                DFS(adj,visited,i);
            }
        }
        return comp-1;
    }
};