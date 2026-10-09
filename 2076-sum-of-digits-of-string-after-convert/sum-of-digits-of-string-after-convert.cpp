class Solution {
public:
    // first collect them all the word with the index and then

    int helper(int num) {
        int ans = 0;
        while (num > 0) {

            ans += num % 10;
            num /= 10;
        }
        return ans;
    }

    int getLucky(string s, int k) {

        string alphabet = "abcdefghijklmnopqrstuvwxyz";

        string collected = "";

        for (int i = 0; i < s.size(); i++) { /// i->4
            for (int j = 0; j < alphabet.size(); j++) {
                if (alphabet[j] == s[i]) {
                    collected += to_string(j + 1);
                    break;
                }
            }
        }

        int sum = 0;
        for (char c : collected)
            sum += c - '0';
            
        for (int i = 1; i < k; i++) {
            sum = helper(sum);
        }

        return sum;
    }
};