class Solution{
    public:
    vector<int> minimumTime(int n,vector<vector<int>> &edges,int m){
        // calculating indegree
        vector<int> indegree(n+1,0);
        for(auto it: edges){
            indegree[it[1]]++;
        }

        // timer: maintains the time of the each node
        vector<int> timer(n+1,0);

        // adj : adjacency list
        vector<vector<int>> adj(n+1);
        for(auto it: edges){
            adj[it[0]].push(it[1]);
        }

        // queue used to store the nodes that have 0 indegree
        queue<int> q;
        // push those nodes having zero indegree and set the timer to 1
        for(int i=1;i<=n;i++){
            if(indegree[i]==0){
                q.push(i);
                timer[i]=1;
            }
        }

        while(!q.empty()){
            // remove the front node from queue
            auto node = q.front();
            q.pop();

            // iterate all the adjacent neigbors
            for(auto it: adj[node]){
                // decrement the indegree
                indegree[it]--;
                // if the indegree is 0 then push into queue and update the timer for that node
                if(indegree[it]==0){
                    q.push(it);
                    timer[it]=timer[node]+1;
                }
            }
        }

        return std::vector<int>(timer.begin()+1,timer.end());
    }
};