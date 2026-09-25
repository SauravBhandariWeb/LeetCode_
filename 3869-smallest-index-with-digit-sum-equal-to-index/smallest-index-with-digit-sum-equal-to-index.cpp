class Solution {
public:
    bool helper(int c, int num) {
        string str = to_string(num);
        int ans = 0;
        for (char c : str) {//
            ans += c - '0';//1
        }
    return c==ans? true:false;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {// 1
            if (helper(i, nums[i])) return i; //0
        }
        return -1;
    }
};