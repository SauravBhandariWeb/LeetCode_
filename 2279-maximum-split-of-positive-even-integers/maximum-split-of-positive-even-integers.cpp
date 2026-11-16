class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        unordered_set<int> helper;
        if (finalSum%2!=0)  return {};
        long long sum = 0;
        for (long long i = 2; i <= finalSum; i += 2) {
            sum += i;
            helper.insert(i);
            if (sum >= finalSum) break;
        }
        vector<long long> ans;
        for (int x : helper) {
            if (abs(sum - x) == finalSum) {
                continue;
            }
            ans.push_back(x);
        }
        return ans;
    }
};
