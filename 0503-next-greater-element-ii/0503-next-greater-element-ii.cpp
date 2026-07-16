class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>nge(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(st.empty()){
                int mini=INT_MAX;
                for(int j=0;j<n;j++){
                    if(nums[j]>nums[i]){
                        mini=min(mini,nums[j]);
                        break;
                    }
                }
                nge[i]=(mini==INT_MAX?-1:mini);
            }
            else{
                nge[i]=nums[st.top()];
            }
            st.push(i);
        }
        return nge;
    }
};