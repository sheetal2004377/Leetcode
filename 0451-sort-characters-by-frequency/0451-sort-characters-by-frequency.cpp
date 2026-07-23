class Solution {
public:
    bool static comp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto it :s){
            mpp[it]++;
        }
        vector<pair<char,int>>v(mpp.begin(),mpp.end());
        sort(v.begin(),v.end(),comp);
        string ans="";
        for(auto it:v){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};