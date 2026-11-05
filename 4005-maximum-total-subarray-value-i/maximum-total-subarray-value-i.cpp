class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {


        int ansmin = INT_MAX;

        int ansmax = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++) {
            ansmax = max(nums[i], ansmax);
            ansmin = min(nums[i], ansmin);
        }

        return 1LL * (ansmax - ansmin) * k;
    }
};