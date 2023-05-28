class Solution{
    public:
    // Function to find the Shortest distance of all the vertices from the source vertex S
    vector<int> dijkstra(int V, vector<vector<int>> adj[],int S){

        // min heap
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> dist(V);
        for(int i=0;i<V;i++){
            // mark the all distance as infinity
            dist[i]=INT_MAX;
        }

        // mark the source node as 0
        dist[S]=0;
        // push the source node into min heap
        pq.push({0,S});

        while (!pq.empty())
        {
            // extract the minimum
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node]){
                int wt = it[1];
                int adjNode = it[0];
                if(dis+wt<dist[adjNode]){
                    dist[adjNode]= dis+wt;
                    // push the updated distance into min Heap
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
};