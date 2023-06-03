class Solution{
    public:
    int matrixMultiplication(vector<int>& arr,int N){
        vector<vector<int>> dp(N,vector<int>(N,-1));

        // base case
        for(int i=1;i<N;i++){
            dp[i][i]=0;
        }

        for(int i=N-1; i>=1; i--){
            for(int j=i+1; j<N;j++){
                int minSteps = INT_MAX;

                // partioning loop
                for(int k=i;k<j;k++){
                    int steps = arr[i-1]*arr[j]*arr[k]+dp[i][k]+dp[k+1][j];
                    minSteps=min(minSteps,steps);
                }
                dp[i][j]=minSteps;
            }
        }
        return dp[1][N-1];
    }
};