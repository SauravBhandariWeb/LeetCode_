class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = 0;
        if (nums.size() == 1) return nums.front();
        else if (nums.size() == 2)
           return max(nums[0], nums[1]);
        else {
            int dp[3];
            dp[0]=nums.front();
            dp[1]=max(nums[0], nums[1]);
            for (int i = 2; i < nums.size(); i++) {
                dp[2] = max(nums[i]+dp[0],dp[1]);//11 
                dp[0]=dp[1];// 11
                dp[1]=dp[2];//
            }
           ans = dp[2];
        }
return ans;
    }
};