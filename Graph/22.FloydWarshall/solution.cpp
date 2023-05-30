class Solution{
    public:
    void shortest_distance(vector<vector<int>>&matrix){
        int n=matrix.size();

        // changing -1 to INT_MAX
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) matrix[i][j]=0;
                if(matrix[i][j]==-1) matrix[i][j]=INT_MAX;
            }
        }

        // floyd warshall algorithm
        for(int via=0;via<n;via++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][via]!=INT_MAX && matrix[via][j]!=INT_MAX && matrix[i][via]+matrix[via][j]<matrix[i][j]){
                        // update the distance
                        matrix[i][j]=matrix[i][via]+matrix[via][j];
                    }
                }
            }
        }

        // changing INT_MAX to -1
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==INT_MAX) matrix[i][j]=-1;
            }
        }

    }
};