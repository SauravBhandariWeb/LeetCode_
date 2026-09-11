class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;          // 100
        int second = INT_MAX;         // 20
        for (int x : nums) {          // 20 100 10 12 5 13
            if (x <= first) {         // 10<=20
                first = x;            // 20<=100
            } else if (x <= second) { // 20<10
                second = x;       //
            } else  return true;
        }
        return false;
    }
};
// first<second<third