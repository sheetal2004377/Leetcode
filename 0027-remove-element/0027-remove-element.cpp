class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int j=0;
        while(i<n){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }
            i++;
        }
        return j;
        
    }
};