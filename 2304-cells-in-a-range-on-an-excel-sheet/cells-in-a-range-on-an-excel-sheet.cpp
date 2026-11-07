class Solution {
public:
    vector<string> cellsInRange(string s) {
        char smallchar = 'Z';
        char largechar = 'A';
        int largeNum = INT_MIN;
        int smallNum = INT_MAX;
        for (char c : s) {
            if (isdigit(c)) {
                largeNum = max(c - '0', largeNum);
                smallNum = min(c - '0', smallNum);
            } else if (c != ':') {
                smallchar = min(smallchar, c);
                largechar = max(largechar, c);
            }
        }
        vector<string> ans;
        for (char c = smallchar; c <= largechar; c++) {
            for (int i = smallNum; i <= largeNum; i++) {
                string str = string(1, c) + to_string(i);
                ans.push_back(str);
            }
        }
        return ans;
    }
};