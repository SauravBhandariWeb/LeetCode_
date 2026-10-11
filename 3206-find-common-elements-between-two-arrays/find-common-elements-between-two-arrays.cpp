class Solution {
public:
    void fillset(set<int>& s,vector<int>nums) {
        for (int x : nums) {
            s.insert(x);
        }
    }
    // check nums1 ele is it exit in set or not if yes push in ans
    void checkans(set<int> s, vector<int> nums,int& ans) {
        for (int x : nums) {
            if (s.count(x))ans++;
        }
    }

    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       
        int ans1=0;
        int ans2=0;
        set<int>s;
        // fill set function
        fillset(s, nums1);
        checkans(s, nums2, ans2);

        s.clear();

        fillset(s, nums2);
        checkans(s, nums1, ans1);
        
        return {ans1,ans2};

    }
};