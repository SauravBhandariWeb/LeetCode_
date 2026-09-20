class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        for (int x = 0; x < nums.size()-1; x++) {
            for (int y = x+1; y < nums.size(); y++) {
                if (abs(nums[x]-nums[y]) <= min(nums[x],nums[y]))
                    ans = max(ans, nums[x] ^ nums[y]);
            }
        }
        return ans;
    }
};
