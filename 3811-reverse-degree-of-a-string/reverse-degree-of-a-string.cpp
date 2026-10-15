class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char, int> m;
        int i = 1;
        for (char c = 'z'; c >= 'a'; c--) {
            m[c] = i++;
        }
        int ans = 0;
        i = 1;
        for (char c : s) {
            ans += m[c] * i++;
        }
        return ans;
    }
};