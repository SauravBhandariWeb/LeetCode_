class Solution {
public:
    bool threeFibonacciSum(int n) {

        long long a = 0, b = 1, c = 1;

        while (a <= n) {
            if (a + b + c == n) return true;
            // update a,b,c
            long long next = b + c;
            a = b;
            b = c;
            c = next;
        }
        return false;
    }
};
