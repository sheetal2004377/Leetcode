class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty()&&st.top()!=s[i]){
                st.push(s[i]);
            }
            else if(!st.empty()&&st.top()==s[i]){
                st.pop();
            }
        }
        string si="";
        while(!st.empty()){
            si+=st.top();
            st.pop();
        }
        reverse(si.begin(),si.end());
        return si;
    }
};