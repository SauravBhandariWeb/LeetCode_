class Solution {
public:
    bool helper(int idx, vector<int>& dp, vector<int>& nums) {
        if (idx >= nums.size() - 1)
            return true;


        if (dp[idx] != -1) return dp[idx];

        if (nums[idx] == 0) return false;

        for (int i = 1; i <= nums[idx]; i++) {
            if (helper(idx + i, dp, nums))
                return dp[idx] = 1;
        }
        return dp[idx] = false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return helper(0, dp, nums);
    }
};