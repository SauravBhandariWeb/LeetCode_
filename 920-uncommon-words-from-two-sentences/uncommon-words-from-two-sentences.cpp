class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        string str;

        stringstream check1(s1);

        stringstream check2(s2);

        while (check1 >> str) {
            m[str]++;
        }
        while (check2 >> str) {
            m[str]++;
        }
        vector<string> ans;
        for (auto [str, second] : m) {
            if (second == 1)
                ans.push_back(str);
        }
        return ans;
    }
};
