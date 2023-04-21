class solution{
    public:
    // Function to return the adjacency list for each vertex
    vector<vector<int>> printGraph(int V, vector<int> adj[]){
        vector<vector<int>> graph(V);
        // iterate over all the adjacency list
        for(int i=0;i<V;i++){
            // add the vertex itself
            graph[i].push_back(i);
            // iterate over all the connected neighbours
            for(auto u:adj[i]){
                // add the connected neighbours
                graph[i].push_back(u);
            }
        }
        return graph;
    }
};