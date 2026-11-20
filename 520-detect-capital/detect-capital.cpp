class Solution {
public:
    bool detectCapitalUse(string word) {
        // detect for capital
        if(word.size()==1) return true;
        int i = 0, j = word.size() - 1;
        // check for capitial
        // both front and back should be in a capital way
        // if yes
        if (!islower(word.front()) && !islower(word.back())) {
            j = j - 1;
            while (j) {
                // if we lower find then print false
                if (islower(word[j]))
                    return false;
                    j--;
            }
            return true;
        } else if (islower(word.front()) && islower(word.back())) {
            j = j - 1;
            while (j) {
                // if we lower find then print false
                if (!islower(word[j]))
                    return false;
                    j--;
            }
            return true;
        } else if (!islower(word.front()) && islower(word.back())) {
            j = j - 1;
            while (j) {
                // if we lower find then print false
                if (!islower(word[j]))
                    return false;
                    j--;
            }
            return true;
        }
        return false;
    }
};