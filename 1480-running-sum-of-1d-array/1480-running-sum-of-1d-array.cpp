class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int total = 0;
        for (int num : nums) {
            total += num;
            result.push_back(total);
        }
        return result;
    }
};