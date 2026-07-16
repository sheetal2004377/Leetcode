class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        string st="";
        for(int i=0;i<n;i++){
            if(st.empty()){
               st+=s[i];
            }
            else if(!st.empty()&&st.back()!=s[i]){
                st+=(s[i]);
            }
            else if(!st.empty()&&st.back()==s[i]){
                st.pop_back();
            }
        }
    
        return st;
    }
};