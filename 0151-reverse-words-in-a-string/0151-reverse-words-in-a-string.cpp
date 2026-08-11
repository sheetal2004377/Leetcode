class Solution {
public:
   string reverse(string &s){
    int st=0;
    int e=s.size()-1;
    while(st<=e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    return s;
   }
    string reverseWords(string s) {
        int n=s.size();
        s=reverse(s);
        string word="";
        int i=0;
        while(i<n){
             string ans="";
               while(i<n&&s[i]==' '){
                i++;
            }
             if(i>=n)break;
            while(i<n&&s[i]!=' '){
                ans+=s[i];
                i++;
            }
          
            
            ans=reverse(ans);
            if(!word.empty()){
                word+=' ';
            }
            word+=ans;
        }
        return word;

        
    }
};