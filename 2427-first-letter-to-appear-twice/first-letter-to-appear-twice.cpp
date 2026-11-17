class Solution {
public:
    char repeatedCharacter(string s) {

        unordered_set<char> helper;

        for (char c : s) {
            if (helper.count(c))  return c;
            helper.insert(c);
        }
        return ' ';
    }
};