class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();

        if (k > s2.length())  return false;
        vector<int> freq1(26);
        vector<int> freq2(26);
        // first window in the s1
        for (int i = 0; i < k; i++) {
            freq1[s1[i] - 'a']++; // go into the index  freq and make count
        }
        // second window in the s2
        for (int i = 0; i < k; i++) {
            freq2[s2[i] - 'a']++; // go into the index  freq and make count
        }
        if (freq1 == freq2)  return true;

        for (int i = k; i < s2.length(); i++) {
            // add new characters
            freq2[s2[i] - 'a']++;
            // removing the useless characters make them c-1 count into the
            // freq2
            freq2[s2[i-k] - 'a']--;

            if (freq1 == freq2)
                return true;
        }
        return false;
    }
};