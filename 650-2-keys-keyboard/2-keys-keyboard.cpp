class Solution {
public:
    int minSteps(int n) {

        int ans = 0, i = 2;

        while (n) {
            if(n==1)break;
            if (n % i == 0) {
                ans += i;
                n /= i;
            } else  i++;
        }
        return ans;
    }
};