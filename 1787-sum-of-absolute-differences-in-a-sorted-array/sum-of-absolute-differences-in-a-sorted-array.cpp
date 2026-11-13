class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;    
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int prefix = 0,n=nums.size();
        for (int i = 0; i < n; i++) {
            int left = nums[i] * i-prefix;
            int right=(totalSum-prefix-nums[i])-nums[i]*(n-i-1);
            ans.push_back(left+right);
            prefix+=nums[i];
    }
    return ans;
}};