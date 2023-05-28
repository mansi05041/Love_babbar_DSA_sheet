solution{
    private:
    // call the fucntion recursively for performing dfs
    void dfs(vector<vector<int>> &image,int sr,int sc,int oldColor,int newColor){
        // boundary case
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size()) return;
        if(image[sr][sc]!=oldColor) return;

        // set the new Color
        image[sr][sc]= newColor;
        
        // recursively call the fucntion for other four directions
        dfs(image,sr+1,sc,oldColor,newColor);
        dfs(image,sr-1,sc,oldColor,newColor);
        dfs(image,sr,sc+1,oldColor,newColor);
        dfs(image,sr,sc-1,oldColor,newColor);
    }
    public:
    // Flood fill algorithm
    vector<vector<int>> floodFill(vector<vector<int>> &image,int sr,int sc,int color){
        // if starting pixel is already has the same color
        if(image[sr][sc]==color) return image;

        int oldColor = image[sr][sc];
        dfs(image,sr,sc,oldColor,color);
        return image;
    }
};