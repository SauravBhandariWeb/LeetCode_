class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int h = to_string(n).size() - 1; // 3
        for (char c : to_string(n)) {
            int num = 1;
            int Mod=1e9;
            if (c != '0') {
                num *= c - '0';
                for (int i = 0; i < h; i++) {
                    num *= 10%Mod;
                }
                ans.push_back(num);
            }
            h--;
        }
        return ans;
    }
};