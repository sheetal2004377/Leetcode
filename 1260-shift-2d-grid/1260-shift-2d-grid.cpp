class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int total=n*m;
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int index=i*m+j;
                int newindex=(index+k)%total;
                int nrow=newindex/m;
                int ncol=newindex%m;
                ans[nrow][ncol]=grid[i][j];
            }
        }
        return ans;
    }
};