class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 0;

        for (int x : s) {

            if (!s.count(x - 1)) { // 109

                int next = x; // 109

                int count = 1;

                while (s.count(next + 1)) {

                    next++;
                    count++;

                }
                ans = max(ans, count);
            }
        }
    return ans;
    }
};