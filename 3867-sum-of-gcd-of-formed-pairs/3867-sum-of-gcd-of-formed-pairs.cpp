class Solution {
public:
   bool static comp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
   }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            ans.push_back(gcd(maxi,nums[i]));
        }
        sort(ans.begin(),ans.end());
        int l=0;
        int r=ans.size()-1;
        long long sum=0;
        while(l<r){
            sum+=gcd(ans[l],ans[r]);
            l++;
            r--;
        }
        return sum;
    }
};