class Solution {
public:
    string helper(string str) {
        set<char> s(str.begin(), str.end());
        string newstr;
        for (char c : s) {
            newstr += c;
        }
        return newstr;
    }
    int similarPairs(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {
            words[i] = helper(words[i]);
        }

        int ans = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[i] == words[j])
                    ans++;
            }
        }
        return ans;
    }
};