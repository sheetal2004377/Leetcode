class Solution {
public:
    const long long MOD = 1000000007;
    int power(long long x,long long n){
        if(n==0)return 1;
        long long ans=power(x,n/2);
        ans=(ans*ans)%MOD;
        if(n%2==1)
        ans=(ans*x)%MOD;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long evenways=(n+1)/2;
        long long oddways=n/2;
        long long even=power(5,evenways);
        long long odd=power(4,oddways);
        return (even*odd)%MOD;
        
    }
};