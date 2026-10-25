
class Solution {
public:
    int minDeletions(string s) {

        unordered_map<char, int> m;



        for (char c : s) {
            m[c]++;
  
        }

        int ans = 0;

        set<int> st;

        for (auto c : m) {

            int freq = c.second;

            while(freq > 0 &&  st.count(freq)) {
                ans++;
                freq--;
            }
            if (freq > 0) st.insert(freq);
        }

        return ans;
    }
};
