class Solution {
public:
    bool solve(vector<int>&piles,int hr,int h){
        long long sum=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            sum+=(piles[i]+hr-1)/hr;
        }
        return sum<=h;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(solve(piles,mid,h)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;;
            }
        }
        return ans;
    }
};