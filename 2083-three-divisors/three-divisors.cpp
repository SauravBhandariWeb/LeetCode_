class Solution {
public:
    bool helper(int n) {
        
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                return true;
        }
        return false;
    }
    bool isThree(int n) {
        vector<int>nums;
        for (int i = 2; i <= 100; i++) { //
            if (!helper(i)){
                nums.push_back(i*i);
            }
        }
        for(int x:nums)if(x==n)return true;
        return false;
    }
};