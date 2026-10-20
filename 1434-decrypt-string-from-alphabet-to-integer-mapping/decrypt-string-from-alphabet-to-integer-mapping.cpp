class Solution {
public:
    string freqAlphabets(string s) {
        int num = 10;

        map<string, char> m1;

        for (char c = 'j'; c <= 'z'; c++) {
            string str = to_string(num) + '#';
            m1[str] = c;
            num++;
        }

        num = 1;

        for (char c = 'a'; c <= 'i'; c++) {
            string numchar = to_string(num);
            m1[numchar] = c;
            num++;
        }

        int n = s.length();

        string ans = "";

        int jump = 0;

        while (jump < n) {

            if (jump + 2 < n && s[jump + 2] == '#') {
                string str = s.substr(jump, 3);
                ans += m1[str];
                jump += 3;
            } else {
                string str = string(1, s[jump]);
                ans += m1[str];
                jump++;
            }
        }

        return ans;
    }
};