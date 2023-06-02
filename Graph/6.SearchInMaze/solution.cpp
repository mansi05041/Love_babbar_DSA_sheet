class Solution{
    private:
    void solve(int i,int j,vector<vector<int>>& m, int n,vector<vector<bool>>& visited, vector<string>& result, string str){
        // if the indices are of destination 
        if(i==n-1 && j==n-1){
            result.push_back(str);
            break;
        }
        
        // Explore all the 4 directions
        string dir = "DLRU";
        vector<int> nextPosI = {1,0,0,-1};
        vector<int> nextPosJ = {0,-1,1,0};
        for(int k=0;k<4;k++){
            int nr = i+nextPosI[k];
            int nc = j+nextPosJ[k];
            if(nr>=0 && nr<n && nc>=0 && nc<n && visited[nr][nc]==false && m[nr][nc]==1){
                // marked the indices visited
                visited[nr][nc]=true;
                solve(nr,nc,m,n,visited,result,str+dir[k]);
                // mark the indices unvisited
                visited[nr][nc]=false;
            }
        }
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n){
        // visited array
        vector<vector<bool>> visited(n,vector<bool>(n,false));

        // base case
        if(m[0][0]==0) return {"-1"};

        // resultant vector
        vector<string> result;

        // call the recursive function 
        solve(0,0,m,n,visited,result,"");

        return result;
    }
};