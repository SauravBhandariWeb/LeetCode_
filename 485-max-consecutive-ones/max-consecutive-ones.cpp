class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = -1, sum = 0;
        for (int i = 0; i < nums.size(); i++) { // [1,1,0,1,1,1]
                if (nums[i] == 1)  sum++;
                else {
                    ans = max(sum, ans);
                    sum = 0;
                }
            }
        return max(sum, ans);
        }
};