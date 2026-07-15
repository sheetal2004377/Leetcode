class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b){
        return (a[0]-a[1])<(b[0]-b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size()/2;
        sort(costs.begin(),costs.end(),comp);
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=costs[i][0];
            ans+=costs[n+i][1];
        }
        return ans;
        
    }
};