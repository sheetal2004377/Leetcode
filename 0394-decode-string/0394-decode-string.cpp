class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        string ans="";
        int num=0;
        stack<int>st;
        stack<string>alp;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(isalpha(s[i])){
                ans+=s[i];
            }
            else if(s[i]=='['){
                alp.push(ans);
                st.push(num);
                num=0;      
                ans="";
            }
            else if(s[i]==']'){
                int val=st.top();
                st.pop();
                string prev=alp.top();
                alp.pop();
                string temp="";
                while(val>0){
                temp+=ans;
                val--;
                }   
                ans=prev+temp;
            }
        }
        return ans;
    }
};