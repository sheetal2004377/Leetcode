class Solution {
public:

    int solve(int ind, int sum, vector<int>& nums, int target) {

        if(ind == nums.size()) {
            return (sum == target);
        }

        int plus = solve(ind + 1, sum + nums[ind], nums, target);

        int minus = solve(ind + 1, sum - nums[ind], nums, target);

        return plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        return solve(0, 0, nums, target);

    }
};