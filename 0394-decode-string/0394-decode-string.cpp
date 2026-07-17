class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<int>nums;
        stack<string>st;
        string ans="";
        int num=0;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                nums.push(num);
                st.push(ans);
                num=0;
                ans="";
            }
            else if(isalpha(s[i])){
                ans+=s[i];
            }
            else if(s[i]==']'){
                int repeat=nums.top();
                nums.pop();
                string prev=st.top();
                st.pop();
                string temp="";
                while(repeat--){
                    temp+=ans;
                }
                ans=prev+temp;
            }
        }
      return  ans;
    }
};