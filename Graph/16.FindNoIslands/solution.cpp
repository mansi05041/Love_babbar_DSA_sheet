class Solution{
    private:
    // Function that check the validity of index
    isvalid(int r,int c,int n,int m){
        if(r>=0 && r<n && c>=0 && c<m) return true;
        return false;
    }
    // Function to perform the bfs traversal
    bfs(int row,int col,int n,int m,vector<vector<bool>>& visited, vector<vector<char>>& grid){
        // mark the current grid visited
        visited[row][col]=true;
        // queue for performing bfs
        queue<pair<int,int>> q;
        // push the current grid into the queue
        q.push({row,col});

        while(!q.empty()){
            auto qrow = q.front().first;
            auto qcol = q.front().second;
            q.pop();

            // traverse the all directions
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nrow = qrow+i;
                    int ncol = qcol+j;
                    if(isvalid(nrow,ncol,n,m) && visited[nrow][ncol]==false && grid[nrow][ncol]=='1'){
                        q.push({nrow,ncol});
                        visited[nrow][ncol]=true;
                    }
                }
            }
        }
    }
    
    public:
    // Function to find the number of islands
    int numIslands(vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();

        // visited array
        vector<vector<bool>> visited(n,vector<bool>(m,false));

        int islands=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                // if the grid is not visited and it is a land
                if(visited[row][col]==false && grid[row][col]=='1'){
                    islands++;
                    bfs(row,col,n,m,visited,grid);
                }
            }
        }
        return islands;
    }
};