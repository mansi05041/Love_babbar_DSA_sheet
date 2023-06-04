class Solution{
    public:
    int solve(int i,int j,vector<vector<int>>& dp,string& s1,string& s2){
        // base case : if the either of string exhausted
        if(i<0) return j+1;
        if(j<0) return i+1;

        // if the subproblem is already solved
        if(dp[i][j]!=-1) return dp[i][j];

        // if the occurence of both string are equal
        if(s1[i]==s2[j]) return dp[i][j] = 0 + solve(i-1,j-1,dp,s1,s2);

        return dp[i][j] = 1 + min(solve(i,j-1,dp,s1,s2),min(solve(i-1,j,dp,s1,s2),solve(i-1,j-1,dp,s1,s2)));

    }
    int editDistance(string s,string t){
        int n=s.size();
        int m=s.size();

        // dp vector 
        vector<vector<int>> dp(n,vector<int>(m,-1));

        // call the solve function that will return the min steps
        return solve(n-1,m-1,dp,s,t);
    }
};