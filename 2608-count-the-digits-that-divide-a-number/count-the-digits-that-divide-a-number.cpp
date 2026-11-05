class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++) {
            int digit = str[i] - '0';
            if(num%digit==0)count++;
        }
    return count;
    }
};