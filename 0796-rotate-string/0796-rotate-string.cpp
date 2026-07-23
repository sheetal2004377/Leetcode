class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m)return false;
        string temp=s+s;
        return temp.find(goal)!=string::npos;
    
    }
};