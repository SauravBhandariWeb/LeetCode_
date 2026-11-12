class Solution {
public:
    string interpret(string command) {
        string ans;
        int close = 0;
        for (char c : command) {
            if (c == '(') {
                close++;
            } else if (close != 0 && c == ')') {
                ans += 'o';
                close = 0;
            } else if (close != 0 && c != ')') {
                ans += c; // a
                close = 0;
            } else if (close != 0 && c == ')') {
                ans += "al"; // a l
            } else  {
                ans += c;
            }
        }
        string newstr = "";
        for (char c : ans) {
            if (c != ')')
                newstr += c;
        }

        return newstr;
    }
};