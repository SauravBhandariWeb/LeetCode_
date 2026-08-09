class Solution {
public:
    int addDigits(int num) {
        if (num == 0)return 0;
        if(to_string(num).length()==1) return num;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum+=digit;
            num/=10;
        }
    return addDigits(sum);
    }
};