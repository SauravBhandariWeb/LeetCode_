class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        queue<char> q1;
        queue<char> q2;

        for (char c : s1)
            q1.push(c);
        for (char c : s2)
            q2.push(c);

        string ans1 = ""; // ar
        string ans2 = ""; // mp
        vector<vector<string>> ans;
        while (!q1.empty()) {

            if (q1.front() != q2.front()) { // a!=m
                ans1 += q1.front();
                ans2 += q2.front();
            } else {
                if(!ans1.empty() &&!ans2.empty()) ans.push_back({ans1, ans2});
                ans1 = "";
                ans2 = "";
            }
            q1.pop(); // r
            q2.pop(); // p
        }
         if(!ans1.empty() &&!ans2.empty()) ans.push_back({ans1, ans2});
        return ans;
    }
};