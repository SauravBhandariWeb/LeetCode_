class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {

        int n = word.size();

        vector<int> ans;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum = (sum * 10 + (word[i] - '0')) % m;
            sum == 0 ? ans.push_back(1) : ans.push_back(0);
        }

        return ans;
    }
};