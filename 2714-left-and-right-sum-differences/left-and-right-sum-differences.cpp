class Solution {
public:
    int helper(int start, int end, vector<int> nums) {
        int sum = 0;
        while (start < end) {
            sum += nums[start];
            start++;
        }
        return sum;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            // i mean ending point
            int left = helper(0, i, nums);
            int right = helper(i + 1, n, nums);
            int ele = abs(left - right);
            ans.push_back(ele);
        }
        return ans;
    }
};