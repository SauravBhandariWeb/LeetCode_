class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        
        unordered_set<int> helper;
        
        if (finalSum%2!=0)  return {};
        
        long long sum = 0;
        
        for (long long i = 2; i <= finalSum; i += 2) {
               if (sum >= finalSum) break;
            sum += i;
            helper.insert(i);
        }
        vector<long long> ans;
        for (int x : helper) {
            if (abs(sum - x) != finalSum) {
                    ans.push_back(x);
            }
        }
        return ans;
    }
};
