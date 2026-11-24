class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        for (char c : to_string(n)) {
            if (c - '0' > 0)
                ans = ans * 10 + c - '0';
        }
        return ans;
    }
};