class Solution {
public:
    string largestGoodInteger(string nums) {
    
        priority_queue<string>ans;

        for (int i = 0; i <= nums.size()-3; i++) {
            if(nums[i] == nums[i+1] && nums[i+1]==nums[i+2]){
                string str = nums.substr(i,3);
                ans.push(str);
            }
        }
    return ans.empty()? "":ans.top();
    }
};