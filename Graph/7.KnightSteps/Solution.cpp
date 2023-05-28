class solution{
    private:
    // Function that will check if the given position is valid or not
    bool isValid(int x,int y,int n,vector<vector<bool>> &visited){
        if(x>=0 && x<n && y>=0 && y<n && visited[x][y]!=true) return true;
        return false; 
    }
    public:
    // Function to return the minimum steps by knight
    int minStepToReachTarget(vector<int> &KnightPos, vector<int>&TargetPos, int N){
        // convert into one-based to zero-based indexing
        int tx = TargetPos[0]-1, ty = TargetPos[1]-1;
        int kx = KnightPos[0]-1, ky = KnightPos[1]-1;

        // base condition
        if(tx==kx && ty==ky) return 0;

        // visited array
        vector<vector<bool>> visited(N,vector<bool>(N,false));

        // queue that stores the adjacent positions
        queue<pair<int,int>> q;

        // push the current position and mark it visited
        q.push({kx,ky});
        visited[kx][ky]=true;

        int steps = 0;

        while (!q.empty())
        {
            // increment the steps
            steps++;

            int size = q.size();

            while (size!=0)
            {
                // remove the front position in queue
                auto pos = q.front();
                q.pop();

                int px = pos.first;
                int py = pos.second;

                // add all the possible adjacent position in the queue
                vector<int> possibleX = {1,1,-1,-1,2,2,-2,-2};
                vector<int> possibleY = {2,-2,2,-2,1,-1,1,-1};

                for(int i=0;i<8;i++){
                    int ax = px-possibleX[i];
                    int ay = py-possibleY[i];

                    // check if the current position is valid
                    if(isValid(ax,ay,N,visited)){
                        
                        // check if the current position is equal to the target position
                        if(ax==tx && ay==ty) return steps;

                        // push the position into queue and mark it visited
                        q.push({ax,ay});
                        visited[ax][ay]=true;
                    }
                }

                // decrement the steps
                steps--;
            }
        }
        return steps;
    }
};