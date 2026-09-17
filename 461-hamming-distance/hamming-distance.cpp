class Solution {
public:
    string helperbts(int num) {
        string ans;
        while (num > 0) {
            if (num % 2 == 0)
                ans.insert(ans.begin(),'0');
            else
                ans.insert(ans.begin(),'1');
            num /= 2;
        }
        return ans;
    }

    int hammingDistance(int x, int y) {
        // convertion into the bits
        string str1 = helperbts(x);
        string str2 = helperbts(y);

        while (str1.size() > str2.size()) {
            str2.insert(str2.begin(), '0');
        }

        while (str1.size() < str2.size()) {
            str1.insert(str1.begin(), '0');
        }

        int i = 0, j = str1.size(), ans = 0;
        while (i < str1.size()) {
            if (str1[i] != str2[i])
                ans++;
            i++;
        }
        return ans;
    }
};