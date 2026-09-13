class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k != 0) return false;
        
        sort(nums.begin(),nums.end());
        
        map<int, int> m;
        
        for (int x : nums) m[x]++;
        for (int x : nums) {
            if(m[x]!=0){
                for(int i=0;i<k;i++){
                    if(m[x+i]==0) return false;
                    m[x+i]--;
                }
            }
        }
        return true;
    }
};