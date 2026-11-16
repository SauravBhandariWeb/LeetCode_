class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        long long even = 1, odd = 0;
        long long ans = 0;

        int mod = 1e9 + 7;
        int parity = 0;

        for (int num : arr) {

            parity = (parity + num) % 2;

            if (parity == 0) {
                ans += odd;
                even++;
            }
            else {
                ans += even;
                odd++;
            }

            ans %= mod;
        }

        return ans;
    }
};