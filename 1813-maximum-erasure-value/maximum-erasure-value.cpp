class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int sum = 0;
        int ans = 0,i=0;
        for (int j=0;j<nums.size();j++) {
            while (s.count(nums[j])) {// see if yes then update the next
                s.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            s.insert(nums[j]);
            sum += nums[j];
            ans = max(ans, sum);
        }
        return ans;
    }
};