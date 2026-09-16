class Solution {
public:
    int maxFreqSum(string s) {

        unordered_map<char, int> m;

        int vowelno = 0;
        int consonetno = 0;

        for (char c : s) {
            m[c]++;
        }

        for (auto x : m) {
            char c = x.first;
            int value = x.second;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelno = max(vowelno, value);
            } else {
                consonetno = max(consonetno, value);
            }
        }

        return vowelno + consonetno;
    }
};