class Solution {
public:
    int helper(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int minele = INT_MAX;
        for (int x : nums) {
            if (x < 10)
                minele = min(x, minele);
            else minele = min(minele, helper(x));
        }
    return minele;
    }
};