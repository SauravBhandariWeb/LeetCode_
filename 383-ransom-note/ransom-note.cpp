class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> rcheck; // ransomNote

        unordered_map<char, int> mcheck; // ransomNote

        for (char c : ransomNote)
            rcheck[c]++;

        for (char c : magazine)
            mcheck[c]++;

        for (auto x : rcheck) {

            if (mcheck[x.first] < x.second)
                return false;
        }

        return true;
        
    }
};
