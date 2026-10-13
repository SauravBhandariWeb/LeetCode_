class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size(), count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
    
                    string ele1 = to_string(nums[i]);;
                    string ele2 = to_string(nums[j]);
                    if (gcd(ele1.front()-'0',ele2.back()-'0') == 1)
                        count++;
                
            }
        }
        return count;
    }
};