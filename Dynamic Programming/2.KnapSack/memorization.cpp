class Solution{
    public:

    // Recursion function with memorization
    int solve(int W, int wt[], int val[], int index, vector<vector<int>> &dp){
        // base case
        if(index==0){
            // check if the weight of item at index 0 is lesser or equal to the total Weight of bag
            if(wt[0]<=W) return val[0];
            else return 0;
        }

        // check if already present in the dp
        if(dp[index][W]!=-1) return dp[index][W];

        int notTaken = 0 + solve(W,wt,val,index-1,dp);
        int taken = INT_MIN;
        if (wt[index]<=W) taken= val[index]+ solve(W-wt[index],wt,val,index-1,dp);
        
        return dp[index][W]=max(notTaken,taken);
    }

    // Function to return max value that can be put in knapsack
    int knapsack(int W,int wt[], int val[], int n){
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
        return solve(W,wt,val,n-1,dp);
    }
};