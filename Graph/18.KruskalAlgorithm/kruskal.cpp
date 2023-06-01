class DisjointSet{
    vector<int> rank,parent;
    public:
    // constructor
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i;
    }
    // function to find the ultimate parent
    int findUParent(int node){
        if(node==parent[node]) return node;
        return parent[node]= findUParent(parent[node]);
    }
    // function to apply union by rank
    void unionByRank(int u,int v){
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(ulp_u==ulp_v) return ; // both have the same ultimate parent
        if(rank[ulp_u]<rank[ulp_v]) parent[ulp_u] = ulp_v;
        else if(rank[ulp_u]>rank[ulp_v]) parent[ulp_v] = ulp_u;
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution{
    public:
    // Function to find sum of weights of edges of minimum spanning tree
    int spanningTree(int V,vector<vector<int>> adj[]){

        vector<pair<int,pair<int,int>>> edges;
        // populate the edges using adjacent list
        for(int i=0;i<V;i++){
            for(auto it:adj[it]){
                auto wt = it[1];
                auto u =i;
                auto v = it[0];
                edges.push_back({wt,{u,v}});
            }
        }

        // sort the edges
        sort(edges.begin(),edges.end());

        // use the disjoint sets
        DisjointSet ds(V);

        // MST weight - intially set to 0
        int mstWT = 0;

        for(auto it: edges){
            auto wt = it.first;
            auto u = it.second.first;
            auto v = it.second.second;

            if(ds.findUParent(u)!=ds.findUParent(v)){
                mstWT+=wt;
                ds.unionByRank(u,v);
            }
        }
        return mstWT;
    }
};