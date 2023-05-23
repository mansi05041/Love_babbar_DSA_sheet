class Solution{
    public:
    int coinChange(vector<int>& coins,int amount){
        // intialize dp vector 
        vector<int> dp(amount+1,-1);
        // set the base case for bottom up approach
        dp[0]=0;
        // find the all possible ways
        for(int i=1;i<=amount;i++){
            // set minCoins to large value for every sum i
            int minCoins = INT_MAX;
            // iterate through every coin in coins
            for(auto coin: coins){
                // check if i-coin is valid index and dp[i-coin] is not -1
                if(i-coin>=0 && dp[i-coin]!=-1){
                    // update the minCoins
                    minCoins= min(minCoins,dp[i-coin]+1);
                }
            }
            // update the dp[i]
            dp[i]=(minCoins==INT_MAX)? -1 : minCoins;
        }
        // it represents the min coins required to make the amount
        return dp[amount];
    }
};