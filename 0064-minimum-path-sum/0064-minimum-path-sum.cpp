class Solution {
public:
   int solve (vector<vector<int>>&grid,int i ,int j,vector<vector<int>>&dp){
    int n=grid.size();
    int m=grid[0].size();
    if(i>=n||j>=m)return 1e9;
    if(i==n-1&&j==m-1)return grid[i][j];
    if(dp[i][j]!=-1)return dp[i][j];
    int bottom=grid[i][j]+solve(grid,i+1,j,dp);
    int right=grid[i][j]+solve(grid,i,j+1,dp);
    return dp[i][j]=min(bottom,right);
   }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(grid,0,0,dp);
    }
};