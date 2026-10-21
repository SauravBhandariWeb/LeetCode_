class Solution {
public:
    bool checkZero(string str) {
        if (str.empty())
            return false;
        if (str.back() == '0')
            return true;
        str.pop_back();
        return checkZero(str);
    }
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            for (int j = i; j < n; j++) {
               
                if (checkZero(to_string(j)) || checkZero(to_string(i))) {
                    continue;
                }
                if ((i + j) == n)
                    return {i, j};
            }
        }
        return {0, 0};
    }
};
