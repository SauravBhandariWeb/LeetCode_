class Solution {
public:
    void evencount(int& even, unordered_map<char, int> m) {
        for (auto c : m)
            even += c.second;
    }

    bool halvesAreAlike(string s) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        int n = s.size() / 2;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U')
                m1[s[i]]++;
        }

        for (int i = n; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U')
                m2[s[i]]++;
        }
        int even1 = 0, even2 = 0;
        evencount(even1, m1);
        evencount(even2, m2);

        return even1 == even2;
    }
};