class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int st=0;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(num[i]%2!=0){
                st=i;
                cnt++;
                break;
            }
        }
       return (cnt==0)?"":num.substr(0,st+1); 
    }
};