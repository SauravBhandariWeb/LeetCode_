class Solution {
public:
    string makeGood(string s) {
        string str;
        for (char c : s) {
            if (!str.empty() && tolower(str.back()) == tolower(c) &&
                c != str.back()) {
                str.pop_back();
            }else  str+=c;
        }
    return str;
    }
};