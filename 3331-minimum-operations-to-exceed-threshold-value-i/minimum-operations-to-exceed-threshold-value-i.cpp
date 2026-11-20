class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int ans=0;
        
        for (int i = 0; i < nums.size(); i++) {
            if(k>nums[i]) ans++;
            else break;
        }
        return ans;
    }
};