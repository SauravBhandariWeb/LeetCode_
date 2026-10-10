class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int sum=1;
        for (int i = 1; i <= s.length(); i++) {
            if(s[i]==s[i-1])sum++;
            else if(sum==k)return true;
            else {
                if(s[i]!=s[i-1])sum=1;
            }
        }
    return false;
    }
};