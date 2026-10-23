class Solution {
public:
    string helper(int num) {
        string str = "";
        while (num > 0) {
            if (num % 2 == 0)
                str.insert(str.begin(), '0'); // 0 add
            else
                str.insert(str.begin(), '1'); // 1 add
            num /= 2;
        }
        return str;
    }
    int concatenatedBinary(int n) {
        string str = "";
        for (int i = 1; i <= n; i++) {
            str += helper(i);    
        }
        long long MOD = 1e9+7;
        long long ans = 0;
        for (char ch : str) {
            ans = (ans * 2) % MOD + (ch - '0')% MOD;
        }
        return ans;
    }
};