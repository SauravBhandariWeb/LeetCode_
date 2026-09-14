class Solution {
public:
    string greatestLetter(string s) {

        priority_queue<char>p;// it store the small letters with max ascii

        for (char c : s)
            p.push(c);

        unordered_map<char, int> m;

        for (char c : s)m[c]++;

        while (!p.empty()) {
            char c = p.top();// 
            if (m[tolower(c)] && m[toupper(c)])
                return string(1,toupper(c));
                p.pop();
        }
        return "";
    }
};