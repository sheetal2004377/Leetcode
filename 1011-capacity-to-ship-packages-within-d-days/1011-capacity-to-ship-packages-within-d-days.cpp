class Solution {
public:
    bool solve(vector<int>&nums,int days,int mid){
        int n=nums.size();
        int daycount=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
                daycount++;
            }
        }
        return (daycount<=days);

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(),weights.end());
        int e=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(solve(weights,days,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};