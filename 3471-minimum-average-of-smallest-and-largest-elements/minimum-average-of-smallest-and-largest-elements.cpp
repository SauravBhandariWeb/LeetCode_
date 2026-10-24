class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans = INT_MAX;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            int check =nums[i]+nums[j];
            ans = min(ans,check/2.0);
            i++;j--;
        }
    return ans;
    }
};