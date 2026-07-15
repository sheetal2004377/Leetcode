class Solution {
public: 
    int solve(int a,int b){
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int oddsum=0;
        int evensum=0;
        for(int i=1;i<2*n;i+=2){
            oddsum+=i;
        }
        for(int i=2;i<2*n+1;i+=2){
            evensum+=i;
        }
       return solve(oddsum,evensum);
    }
};