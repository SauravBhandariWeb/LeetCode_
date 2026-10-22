class Solution {
public:
    string removeDuplicates(string str, int k) {
        
        stack<pair<char, int>> s;

        for (char c : str) {
            if (!s.empty() && s.top().first == c) {
                s.top().second++;
            } else {
                // push
                s.push({c, 1});
            }
            if (s.top().second == k)
                s.pop();
        }
        str = "";
        while (!s.empty()) {
            str += string(s.top().second, s.top().first);
            s.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};