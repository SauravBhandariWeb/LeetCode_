class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> s;
        priority_queue<int> p;
        for (int x : nums) {
            s.insert(x);
        }
        for (int x : s) {
            p.push(x);
        }
        vector<int> ans;
        while (k-- && !p.empty()) {
            ans.push_back(p.top());
            p.pop();
        }
        return ans;
    }
};