class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int ones = 0;
        for (char c : s) if (c == '1') ones++;

        int best_pair = 0;
        int prev_zero = INT_MIN / 2;   // fix: bahut chhota number, real 0-block jaisa nahi lagega

        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            int length = j - i;

            if (s[i] == '0') {
                best_pair = max(best_pair, prev_zero + length);
                prev_zero = length;
            }
            i = j;
        }

        return ones + best_pair;
    }
};