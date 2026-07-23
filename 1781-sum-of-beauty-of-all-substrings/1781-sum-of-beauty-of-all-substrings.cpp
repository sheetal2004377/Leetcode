class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int cnt=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp.clear();
            for(int j=i;j<n;j++){
                mpp[s[j]-'a']++;
                int mx=0;
                int mn=INT_MAX;
                for(auto &it:mpp){
                    mx=max(mx,it.second);
                    mn=min(mn,it.second);
                }
                cnt+=(mx-mn);
            }
        }
        return cnt;
    }
};