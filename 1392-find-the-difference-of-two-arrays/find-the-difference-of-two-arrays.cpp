class Solution {
public:


    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;

        for (int x : nums1)  s1.insert(x);

        for (int x : nums2)  s2.insert(x);

        vector<vector<int>> ans;
        vector<int>helper;

        for (int x : s1) {
            if (!s2.count(x)) {
                helper.push_back(x);
            }
        }

        ans.push_back(helper);

        helper.clear(); 

     
        for (int x : s2) {
            if (!s1.count(x)) {
                helper.push_back(x);
            }
        }

        ans.push_back(helper);

        return ans;
    }
};