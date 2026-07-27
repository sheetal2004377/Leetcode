class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c1=nums[n-1];
        int c2=nums[n-2];
        return (c1-1)*(c2-1);

    }
};