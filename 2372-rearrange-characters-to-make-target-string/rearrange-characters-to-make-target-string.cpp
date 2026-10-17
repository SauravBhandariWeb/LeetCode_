class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> tfreq(26);
        vector<int> sfreq(26);
        for (char c : s)
            sfreq[c - 'a']++;

        for (char c : target)
            tfreq[c - 'a']++;

        int ans = INT_MAX;

        for (int i = 0; i < 26; i++) {
            if (tfreq[i] > 0)
                ans = min(ans,(sfreq[i] / tfreq[i]));
        }

        return ans;
    }
};