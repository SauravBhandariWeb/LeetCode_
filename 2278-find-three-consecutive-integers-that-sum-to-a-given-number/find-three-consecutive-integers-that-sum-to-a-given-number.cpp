class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num == 0)  return {num - 1, num, num + 1};
        for (long long i = (num / 3) - 1; i < num; i++) {
            if (num == (i * 3) + 3) {
                return {i, i + 1, i + 2};
            } else   break;
        }
        return {};
    }
};