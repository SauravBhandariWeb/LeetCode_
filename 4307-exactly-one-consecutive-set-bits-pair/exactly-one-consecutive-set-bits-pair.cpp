class Solution {
public:
    string change(int n) {
        string ans = "";
        while (n) {
            if (n % 2 != 0)  ans = ans + '1';
            else  ans = ans + '0';
            n /= 2;
        }
        return ans;
    }

    bool consecutiveSetBits(int n) {
        
        string ans = change(n);
        int count=0;
        for (int i = 1; i < ans.size(); i++) {
            if(ans[i]-'0'==1 && ans[i-1]-'0'==1)count++;
        }

        return count==1? true:false;
    }
};