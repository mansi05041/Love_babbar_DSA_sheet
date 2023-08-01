class Solution{
    public:
    int mod = pow(10,9)+7;
    long long helper(int i,vector<int>& dp){
        // base case
        if(i==1 || i==2) return i;

        // if the problem is already solved
        if(dp[i]!=-1) return dp[i];

        // single 
        long long single = helper(i-1,dp)%mod;
        // paired
        long long paired = ((i-1)*helper(i-2,dp)%mod)%mod;

        return dp[i] = (single+paired)%mod;
    }

    int countFriendsPairing(int n){
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};