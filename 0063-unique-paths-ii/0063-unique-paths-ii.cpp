class Solution {
public: 
    int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        int n=grid.size();
        int m=grid[0].size();
        if(i>=n||j>=m)return 0;
        if(grid[i][j]==1)return 0;
        if(i==n-1&&j==m-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        int down=solve(i+1,j,grid,dp);
        int right=solve(i,j+1,grid,dp);
        return dp[i][j]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(0,0,obstacleGrid,dp);
        
    }
};