class Solution {
public:
    string smallestSubsequence(string s) {
        stack<int>st;
        vector<int>freq(26,0);
        vector<bool>vis(26,false);
        for(char ch:s){
            freq[ch-'a']++;
        }
        for(char ch:s){
            freq[ch-'a']--;
            if(vis[ch-'a'])continue;
            while(!st.empty()&&st.top()>ch&&freq[st.top()-'a']>0){
                vis[st.top()-'a']=false;
                st.pop();
            }
            st.push(ch);
            vis[st.top()-'a']=true;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};