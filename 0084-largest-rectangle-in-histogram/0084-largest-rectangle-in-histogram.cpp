class Solution {
public: 
   vector<int>psee(vector<int>&heights){
    int n=heights.size();
    stack<int>st;
    vector<int>pse(n);
    for(int i=0;i<n;i++){
        while(!st.empty()&&heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            pse[i]=-1;
        }
        else{
            pse[i]=st.top();
        }
        st.push(i);
    }
    return pse;
}
 vector<int>nsee(vector<int>&heights){
    int n=heights.size();
    stack<int>st;
    vector<int>nse(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&heights[st.top()]>heights[i]){
            st.pop();
        }
        if(st.empty()){
            nse[i]=n;
        }
        else{
            nse[i]=st.top();
        }
        st.push(i);
    }
    return nse;
}
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nse=nsee(heights);
        vector<int>pse=psee(heights);
        vector<int>area(n);
        for(int i=0;i<n;i++){
            area[i]=(nse[i]-pse[i]-1)*heights[i];

        }
        int ans=*max_element(area.begin(),area.end());
        return ans;

        
    }
};