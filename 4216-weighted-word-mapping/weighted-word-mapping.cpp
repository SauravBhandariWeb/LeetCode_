class Solution {
public:
    char helper(string str, unordered_map<int, char>& m, string& ans,
                vector<int>& weights) {
        int sum = 0;
        for (char c : str) {
            sum += weights[c-'a'];
        }
        return m[sum % 26];
    }
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans = "";

        int i = 0;

        unordered_map<int, char> m;

        for (char c = 'z'; c >= 'a'; c--) {
            m[i++] = c;
        }

        for (string str : words) {
                ans += helper(str, m, ans, weights);
            }
        
        return ans;
    }
};