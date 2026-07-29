class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        string left="";
        char mid=0;
        for(int i=0;i<26;i++){
            left+=string(freq[i]/2,'a'+i);
            if(freq[i]%2)mid=i+'a';
        }
        string right=left;
        reverse(right.begin(),right.end());
        if(mid)return left+mid+right;
        return left+right;
    }
};