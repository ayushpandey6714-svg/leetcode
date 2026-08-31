class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;

        for (int x : st) {
            // x is the starting point
            if (st.find(x - 1) == st.end()) {
                int current = x;
                int length = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                ans = max(ans, length);
            }
        }

        return ans;
    }
};