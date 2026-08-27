class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        long long curr = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            curr += i * nums[i];
        }
        long long ans = curr;
        // curr = curr + sum - n * nums[i];
        int j = n - 1;
        while (j > 0) {
            curr = curr + sum - (long long)n * nums[j];
            ans = max(curr, ans); j--;
        }
        return ans;
    }
};