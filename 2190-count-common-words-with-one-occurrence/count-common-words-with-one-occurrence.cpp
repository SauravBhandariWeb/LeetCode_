class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m1;
        unordered_map<string, int> m2;
        unordered_set<string> s;

        for (string str : words2)  m1[str]++;

        int ans = 0;

        for (string str : words1)  m2[str]++;

        for (auto x : m1) {
           if(m2[x.first]==1 && x.second==1)ans++;
        }

        return ans;

    }
};