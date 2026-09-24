class Solution {
public:
    void helper(int num,vector<int>&ans) {
        string c = to_string(num);
        for (char c : c) {
        ans.push_back(c-'0');
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        for (int x : nums) {
            if (x <= 9) count++;
        }
        if (count == nums.size())  return nums;
        else {
            for (int x : nums) {
                helper(x,ans);
            }
        }
    return ans;
    }
};