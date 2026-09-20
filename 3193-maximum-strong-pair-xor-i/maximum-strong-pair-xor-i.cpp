class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        for (int x = 0; x < nums.size(); x++) {
            for (int y = 0; y < nums.size(); y++) {
                if (abs(nums[x]-nums[y]) <= min(nums[x],nums[y]))
                    ans = max(ans, nums[x] ^ nums[y]);
            }
        }
        return ans;
    }
};
