class Solution{
    public:
    int mod = pow(10,9)+7;

    int countFriendsPairing(int n){
        vector<long long> dp(n+1,0);

        // base case
        dp[1]=1;
        dp[2]=2;

        for(int i=3;i<=n;i++){
            // single 
            long long single = dp[i-1]%mod;
            // paired
            long long paired = ((i-1)*(dp[i-2]%mod))%mod;

            dp[i] = (single+paired)%mod;
        }

        return dp[n];
    }
};