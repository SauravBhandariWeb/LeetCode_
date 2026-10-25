class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums)m[x]++;
        sort(nums.begin(),nums.end(),[&](int x,int y){
            if(m[x]==m[y]){
                return x>y;// 
            }
            return m[x]<m[y];
        });
    return nums;
    }
};