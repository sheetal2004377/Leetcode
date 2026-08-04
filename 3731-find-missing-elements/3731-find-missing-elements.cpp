class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return {};
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=nums[0];i<=nums[n-1];i++){
            ans.push_back(i);
        }
        int m=ans.size();
        vector<int>anss;
        int i=0;
        int j=0;
        while(i<n&&j<m){
            if(nums[i]==ans[j]){
                i++;
                j++;
            }
            else if(nums[i]>ans[j]){
                anss.push_back(ans[j]);
              j++;
            }
        }
        return anss;

    }
};