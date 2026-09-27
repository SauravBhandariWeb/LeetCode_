class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> m;

        for (auto &v : knowledge) {
           m[v[0]]=v[1];
        }

        string check = "";
        string ans = "";
        bool inside = false;

        for (char c : s) {

            if (c == '(') {
                inside = true;
                check = "";
            }
            else if (c == ')') {
                if (m.find(check) != m.end()) {
                    ans += m[check];
                } else {
                    ans += "?";
                }

                inside = false;
                check = "";
            }
            else {
                if (inside) {
                    check += c;
                } else {
                    ans += c;
                }
            }
        }

        return ans;
    }
};