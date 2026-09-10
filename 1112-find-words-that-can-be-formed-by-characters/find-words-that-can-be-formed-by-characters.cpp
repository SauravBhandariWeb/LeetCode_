class Solution {
public:
    int helper(string str, unordered_map<char, int> mchars) {
        
        int ans = 0;

        unordered_map<char, int> mstr;

        for (char c : str)
            mstr[c]++;

        for (auto x : mstr) {
            if(mchars[x.first] >= x.second) ans += x.second;
            else return 0;
        }
        return ans;
    }

    int countCharacters(vector<string>& words, string chars) {

        int ans = 0;

        unordered_map<char, int> mchars;

        for (char c : chars)
            mchars[c]++;

        for (string str : words) {
            ans += helper(str, mchars);
        }
        return ans;
    }
};