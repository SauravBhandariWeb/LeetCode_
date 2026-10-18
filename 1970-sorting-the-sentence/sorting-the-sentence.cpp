class Solution {
public:
    string sortSentence(string s) {

        set<int> sat;

        for (int i = 1; i <= 9; i++)  sat.insert(i);

        stringstream ss(s);

        string str;
        map<int, string> m;
        while (ss >> str) {
            string st = str;
            // if find
            while (!sat.count(st.back() - '0')) {
                st.pop_back();
            }
            int ele = st.back() - '0';
            st.pop_back();
            m[ele] = st;
        }
        string finalans = "";
        for (auto [_, stringvalue] : m) {
            finalans += stringvalue + " ";
        }
        finalans.pop_back();

        return finalans;
    }
};
