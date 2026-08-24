class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=1;i<nums.size();i++){
            int sum=nums[i-1]+nums[i];
            // check into the m is it available or not 
            if(m[sum]) return true; 
            m[sum]=i;
        }
    return false;
    }
};