class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        int counter = 0;

        for (int i = counter; i < s1.size(); i++) {
            for (int j = i + 1; j < s1.size(); j++) {
                if (s1[i] == s2[i]) counter++;
                else {
                    if (j - i == 2){
                        swap(s1[i],s1[j]);
                    }
                      
                }
            }
        }
        return s1 == s2 ? true : false;
    }
};