class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;
        if (n == 2) return 2;

        // find highest bit position (floor(log2(n))) manually
        int b = 0;
        int temp = n;
        while (temp > 1) {
            temp >>= 1;
            b++;
        }

        return 1 << (b + 1);
    }
};