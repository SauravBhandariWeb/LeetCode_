class Solution {
public:
    bool helper(int num) {

        string str = to_string(num);
        for (int i = 0; i < str.size(); i++) {
            int digit = str[i] - '0';
            if (digit == 0 || num % digit != 0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        while (left <= right) {
            if (helper(left)) {
                nums.push_back(left);
            }
            left++;
        }
        return nums;
    }
};