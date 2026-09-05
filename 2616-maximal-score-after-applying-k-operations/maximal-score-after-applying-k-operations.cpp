class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       
        unordered_map<int, int> m;
    

        priority_queue<int> pq(nums.begin(), nums.end());

        long long ans = 0;
        while(k--) {
            int value = pq.top();
            pq.pop();
            ans += value;
            pq.push(ceil((value/ 3.0)));
        }
        return ans;
    }
};