class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid,int color,int initial){
        vis[row][col]=1;
        grid[row][col]=color;
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==initial){
                dfs(nrow,ncol,vis,grid,color,initial);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int initial=image[sr][sc];
        vector<vector<int>>vis(n,vector<int>(m,0));
        dfs(sr,sc,vis,image,color,initial);
        return image;
        
    }
};