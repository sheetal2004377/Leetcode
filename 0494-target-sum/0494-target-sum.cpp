class Solution {
public:

    int solve(int ind, int sum, vector<int>& nums, int target) {

       if(ind == 0){
    int ways = 0;

    if(sum + nums[0] == target)
        ways++;

    if(sum - nums[0] == target)
        ways++;

    return ways;
}

        int plus = solve(ind - 1, sum + nums[ind], nums, target);

        int minus = solve(ind - 1, sum - nums[ind], nums, target);

        return plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        return solve(nums.size()-1, 0, nums, target);

    }
};