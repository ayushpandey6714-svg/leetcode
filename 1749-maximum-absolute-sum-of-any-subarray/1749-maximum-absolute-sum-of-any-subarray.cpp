class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();

        int prefix = 0;
        int mn = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            prefix = prefix + nums[i];

            if (prefix < mn)
                mn = prefix;

            if (prefix > mx)
                mx = prefix;
        }

        return mx - mn;
    }
};