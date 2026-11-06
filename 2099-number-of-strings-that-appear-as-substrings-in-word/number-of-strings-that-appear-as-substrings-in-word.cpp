class Solution {
public:
    bool helper(string str, string word) {
        if (word.find(str) != string::npos)
            return true;
        return false;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for (string str : patterns) {
            if (helper(str, word))
                ans++;
        }
        return ans;
    }
};