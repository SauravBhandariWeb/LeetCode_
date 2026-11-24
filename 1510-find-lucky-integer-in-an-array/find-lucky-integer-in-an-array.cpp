class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int, int> m;
        for (int x : arr)   m[x]++;
        for (auto [val,freq] : m) {
            if(val==freq)ans=max(ans,val);
        }
    return ans;
    }
};