class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
       
       
        sort(nums.begin(),nums.end());
        
        set<int> s1;
        set<int> s2;

       

        int n = nums.size() - 2;

        for (int i = 0; i <= n; i+=2) {
    
                s1.insert(nums[i]);
                s2.insert(nums[i + 1]);
            
        }
        return (s1.size() + s2.size())==nums.size();
    }
};