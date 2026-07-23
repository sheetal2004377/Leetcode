class Solution {
public:
    string reverse(string &s){
        int n=s.size();
        int st=0;
        int e=n-1;
        while(st<=e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
        return s;
    }
    string reverseWords(string s) {
        int n=s.size();
        int start=0;
        int end=n-1;
         s=reverse(s);
       string ans="";
       int i=0;
       int st=0;
       while(i<n){
        while(i<n&&s[i]==' '){
            i++;
        }
        if(i>=n)break;
        string word="";
        while(i<n&&s[i]!=' '){
            word+=s[i];
            i++;
        }
        word=reverse(word);
        if(!ans.empty()){
         ans+=' ';
        }
        ans+=word;
       }
       return ans;
    }
};