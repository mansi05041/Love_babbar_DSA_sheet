class Solution{
    public:
    void dfs(int i,int j,vector<vector<int>>& visited,vector<int> string,string str,vector<int>& m,int n){
        // base case: if reach to the target
        if(i==n-1 && j==n-1){
            res.push_back(str);
            return;
        }

        // mark the grid visited
        visited[i][j] = 1;

        string dir = "DLRU";
        vector<int> x = {1,0,0,-1};
        vector<int> y = {0,-1,1,0};

        // explore the all directions
        for(int k=0;k<4;k++){
            int nrow = i+x[k];
            int ncol = j+y[k];

            // check if the grid is valid
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && m[nrow][ncol]==1 && visited[nrow][ncol]==0){
                dfs(nrow,ncol,visited,res,str+dir[k],m,n);
            }
        }

        // backtracking
        visited[i][j] = 0;
    }

    vector<string> findPath(vector<vector<int>>& m,int n){
        // base case : the first grid is block
        if(m[0][0]==0) return {"-1"};

        // visited array
        vector<vector<int>> visited(n,vector<int>(n,0));

        vector<string> res;

        dfs(0,0,visited,res,"",m,n);

        if(res.size()==0) return {"-1"};
        return res;
    }
};