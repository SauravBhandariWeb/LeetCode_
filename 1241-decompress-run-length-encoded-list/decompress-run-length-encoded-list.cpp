class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i += 2) { // 2 index jump
        int freq =nums[i],val=nums[i+1];
        while(freq--)ans.push_back(val);
    }
return ans;
}};