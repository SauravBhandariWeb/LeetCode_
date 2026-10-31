class Solution {
public:
    bool scoreBalance(string s) {
        unordered_map<char, int> m;
        int i = 1;
        for (char c = 'a'; c <= 'z'; c++) {
            m[c] = i++;
        }
        int n = s.size();

        int totalsum = 0;
        // left half fill
        for (int i = 0; i < n; i++) {
            totalsum += m[s[i]];
        }
        // right half fill
        int secondcheck = 0;
        int rightsum = 0;
        for (int i = 0; i < n - 1; i++) {
            secondcheck += m[s[i]];
            int check = totalsum - secondcheck;
            if (check == secondcheck)
                return true;
        }

        return false;
    }
};