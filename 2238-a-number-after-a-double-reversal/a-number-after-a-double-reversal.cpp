class Solution {
public:
    int helper(int num) {
       int rev=0;
        while (num>0) {
            rev = num % 10 + rev * 10;
            num /= 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {

        int rev2 = helper(num); // send copy num
        rev2 = helper(rev2);
    return num==rev2;
    }
};