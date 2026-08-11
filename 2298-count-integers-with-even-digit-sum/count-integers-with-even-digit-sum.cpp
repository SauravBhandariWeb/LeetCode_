class Solution {
public:
    int checkEven(string num) {
        int ans = 0;
        for (char c : num) {
            ans += c - '0';
        }
        return ans % 2 == 0;
    }
    int countEven(int num) {
        int count=0,i=2;
        while(i <= num) {
        count+=checkEven(to_string(i));
        i++;
        }
    return count;
    }
};