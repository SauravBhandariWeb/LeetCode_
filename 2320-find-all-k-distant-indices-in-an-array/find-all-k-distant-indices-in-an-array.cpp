class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int>ans;
        set<int>s;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[j] == key && abs(j - i) <= k ) {
                    s.insert(i);
                }
            }
        }

        for(int x:s)ans.push_back(x);

        return ans;
        
    }
};