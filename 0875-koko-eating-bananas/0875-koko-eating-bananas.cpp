class Solution {
public:
    bool solve(vector<int>&piles,int h,int hr){
        long long sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]+h-1)/h;    
        }
        return (sum<=hr);

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        long long ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(solve(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};