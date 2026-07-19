class Solution {
public:
    void solve(int ind,string digits,string output,vector<string>&ans,string mapping[]){
        if(ind==digits.size()){
            ans.push_back(output);
            return;
        }
        int number=digits[ind]-'0';
        string value=mapping[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(ind+1,digits,output,ans,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string mapping[10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output="";
        solve(0,digits,output,ans,mapping);
        return ans;
        
    }
};