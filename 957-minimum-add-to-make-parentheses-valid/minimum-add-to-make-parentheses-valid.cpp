class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, extra = 0;
        for (char c : s) {
            if (c == '(')
                open++;
            else {
                if (open)
                    open--;
                else
                    extra++;
            }
        }
        return plus<int>()(open,extra);
    }
};