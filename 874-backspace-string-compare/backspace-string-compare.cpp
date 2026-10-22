class Solution {
public:
    string combineAllTheele(string s, stack<char>& st) {
        string str;
        while (!st.empty()) {
            str += st.top();
            st.pop();
        }
        return str;
    }
    string helper(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '#') {
                if(!st.empty())  st.pop();
            } else st.push(c);
        }
        return combineAllTheele(s,st);
    }
    bool backspaceCompare(string s, string t) {
        return helper(s) == helper(t) ? true : false;
    }
};