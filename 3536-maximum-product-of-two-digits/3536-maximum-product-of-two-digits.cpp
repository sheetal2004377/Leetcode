class Solution {
public:
    int maxProduct(int n) {
        int prod=1;
        vector<int>arr;
        while(n>0){
            int digit=n%10;
            arr.push_back(digit);
            n=n/10;
        }
        int m=arr.size();
        int maxi=INT_MIN;
       for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            maxi=max(maxi,arr[i]*arr[j]);
        }
       }
       return maxi;
        
    }
};