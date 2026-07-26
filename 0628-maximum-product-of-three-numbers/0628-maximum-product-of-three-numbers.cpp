class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int prod=INT_MIN;
       for(int i=0;i<n-2;i++){
        for(int j=i+2;j<n;j++){
                prod=max(prod,(nums[i]*nums[i+1]*nums[j]));
            }
       }
        return prod;
        
    }
};