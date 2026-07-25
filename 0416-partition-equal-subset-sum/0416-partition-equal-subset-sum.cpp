class Solution {
public:
    int solve(int ind,vector<int>&nums,int target,vector<vector<int>>&dp){
        if(target==0)return true;
        if(ind==0)return nums[ind]==target;
        if(dp[ind][target]!=-1)return dp[ind][target];
        int nottake=solve(ind-1,nums,target,dp);
        bool take=false;
        if(nums[ind]<=target){
            take=solve(ind-1,nums,target-nums[ind],dp);
        }
        return dp[ind][target]=(take||nottake);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,nums,target,dp);
        
    }
};