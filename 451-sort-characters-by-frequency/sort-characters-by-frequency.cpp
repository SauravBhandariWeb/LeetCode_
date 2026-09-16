class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        priority_queue<pair<int, char>> p;
        
        for (char c : s)
            m[c]++;

        for (auto x : m) {
            p.push({x.second, x.first});
        }
        string ans = "";
        while (!p.empty()) {
            int j = p.top().first;
            for (int i = 0; i < j; i++) {
                ans += p.top().second;
            }
            p.pop();
        }
        return ans;
    }
};