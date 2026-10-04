class Solution {
public:
    bool bothAresame(string str, vector<int> pcheck) {
        vector<int> strcheck(26, 0);
        for (char c : str)
            strcheck[c - 'a']++;
        return strcheck == pcheck;
    }
    vector<int> findAnagrams(string s, string p) {
        if (p.length() > s.length()) return {};
        int n2 = p.length();
        int n1 = s.length();
        vector<int> pcheck(26, 0);
        for (char c : p) pcheck[c - 'a']++;
        vector<int> ans;
        for (int i = 0; i < n1; i++) {
            // check both string who is same or not after sort
            string str = s.substr(i, n2);
            if (bothAresame(str, pcheck))
                ans.push_back(i);
        }
            return ans;
    }
};