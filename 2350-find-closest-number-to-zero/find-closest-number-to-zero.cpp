class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minValue = 0;
        int maxValue = 0;
        sort(nums.begin(), nums.end());
        for (int x : nums) {
            if (x == 0)
                return 0;
            if (x < 0)
                minValue = x;
            else {
                maxValue = x;
                break;
            }
        }
        if(maxValue==0) return minValue;
        if(minValue==0) return maxValue;
        int negativecount=0;
        int positivecount=0;
       for(int i=minValue;i<=0;i++)negativecount++;
       for(int i=0;i<=maxValue;i++)positivecount++;
       if(negativecount<positivecount)return minValue;
       return maxValue;
    }
};