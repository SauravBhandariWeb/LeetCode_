class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        
        sort(hours.begin(),hours.end());
        
        int ans=0;
        
        for(int i=hours.size()-1;i>=0;i--){
            if(hours[i]>=target)ans++;
            else break;
        }
        return ans;
        
    }
};