class Solution{
    public:
    // Function to find the sum of weights of edges of the Minimum Spanning Tree
    int spanningTree(int V,vector<vector<int>> adj[]){
        // using prims Algorithm

        // min heap to extract the minimum weight
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        // visited array 
        vector<bool> visited(V,false);

        // push the source node with intial weight 0
        pq.push({0,0});
        int sum=0;

        while (!pq.empty())
        {
            auto wt = pq.top().first;
            auto node = pq.top().second;
            pq.pop();

            // check if it is already visited
            if(visited[node]==true) continue;

            // mark the current node as visited and add the weight to the sum
            sum+=wt;
            visited[node]=true;

            // Iterate over the adjacent neighbors
            for(auto it: adj[node]){ // it[0] stores node , it[1] stores weight 
                // check if it is not visited yet
                if(visited[it[0]]==false){
                    // push into min heap
                    pq.push({it[1],it[0]});
                }
            }
        }
        
        return sum;
    }
};