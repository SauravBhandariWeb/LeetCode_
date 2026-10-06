class Solution {
public:
    int minDeletion(string s, int k) {

        priority_queue<int, vector<int>, greater<int>> p;

        unordered_map<char, int> m;

        int ans = 0;

        for (char c : s)
            m[c]++;

        for (auto c : m)
            p.push(c.second);

        while (p.size() > k) {
            ans += p.top();
            p.pop();
        }

        return ans;
    }
};