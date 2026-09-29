class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // choose common part both arr
        unordered_map<int, int> m;
        vector<int>ans;
        for (int x : nums1)  m[x]++;
        for (int x : nums2) {
                if(m[x]){
                    ans.push_back(x);
                    m[x]--;
                }
            }
        return ans;
    }
};