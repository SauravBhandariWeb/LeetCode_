class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        map<int, int> m;

        vector<int> ans;

        for (int x : arr1)
            m[x]++;

        for (int x : arr2) {
            int freq = m[x];
            while (freq--) {
                m.erase(x);
                ans.push_back(x);
            }
        }

        for (auto x : m) {
            int freq = x.second;
            while (freq--) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};

// check kr arr1 me ele kon nhi h unnko collect kr