class Solution{
    public:
    int isNegativeWeightCycle(int n, vector<vector<int>> edges){
        // boundary case
        if(edges.size()==0) return 0;

        // distance vector
        vector<int> dist(n,INT_MAX);
        // find the source node
        int s = edges[0][0];
        // set the source node to 0
        dist[s]=0;

        for(int i=0;i<n-1;i++){
            for(auto& it: edges){
                auto u = it[0];
                auto v = it[1];
                auto wt = it[2];
                if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]) dist[v]=dist[u]+wt;
            }
        }

        // check the negative weight cycle
        for(auto& it: edges){
            auto u = it[0];
            auto v = it[1];
            auto wt = it[2];
            if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]) return 1; // negative cycle found
        }

        // no negative cycle found
        return 0;
    }
};