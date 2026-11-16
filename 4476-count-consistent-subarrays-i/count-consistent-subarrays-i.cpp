class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            int num1 = nums[i];
            int mini = nums[i];
            for (int j = i; j < n; j++) {
                num1 &= nums[j];
                mini = min(mini, nums[j]);
                if (num1 == mini)
                    ans++;
            }
        }
        return ans;
    }
};