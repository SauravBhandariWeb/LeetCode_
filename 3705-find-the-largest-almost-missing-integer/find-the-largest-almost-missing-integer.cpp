class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        if (k == 1) {
            int ele = -1;
            unordered_map<int, int> m;
            for (int x : nums)  m[x]++;

            for (auto x : m) {
                if (x.second == 1) ele = max(ele, x.first);
            }
            return ele;
        }
        if (k == nums.size()) {
            int ele = -1;
            
            for (int x : nums) ele = max(ele, x);

            return ele;
        }

        unordered_map<int, int> m;
        for (int i = 0; i <= nums.size() - k; i++){

            for (int j = i; j < k + i; j++)  m[nums[j]]++;

        }
        int ans = -1;
        for (auto x : m) {
            if (x.second == 1) ans = max(ans, x.first);
            }
        return ans;
    }
};