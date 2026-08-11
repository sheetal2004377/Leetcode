class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxi=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                cnt=1;
            }
        }
        return (nums.empty()?0:maxi);
        
    }
};