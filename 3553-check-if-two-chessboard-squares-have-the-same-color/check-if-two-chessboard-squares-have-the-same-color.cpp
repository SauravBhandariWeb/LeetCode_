class Solution {
public:
    void check(string& str, unordered_map<char,string> m,string c) { // common part
        if (m[c[0]] == "black") {                               // true
            if (c[1] % 2 != 0)
                str += "black";
            else
                str += "white";
        } else {
            if (c[1] % 2 != 0)
                str += "white";
            else
                str += "black";
        }
    }
    bool checkTwoChessboards(string c1, string c2) {
        // fill with a to h in this unordered map
        int i = 0;
        unordered_map<char, string> m;
        for (char c = 'a'; c <= 'h'; c++) {
            // check for odd
            if (i % 2!= 0) {
                m[c] = "black";
            } else {
                m[c] = "white";
            }
            i++;
        }
        string str1 = "";
        string str2 = "";
        check(str1, m,c1);
        check(str2, m,c2);
        return str1 == str2;
    }
};