class Solution {
public:
    bool helper(string str) {
        int sum = 0;
        for (char c : str) {
            sum = (sum * 2 + c-'0') % 5;
        }
        return sum == 0;
    }
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        string str;
        for (int x : nums) {
            str += to_string(x);
            if (helper(str))
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};