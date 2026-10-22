class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        priority_queue<int>p(nums.begin(), nums.end());

        int sum = 0;
        while (k--) { // 0
            int ele = p.top(); // 7
            sum += ele;//5+6+7
            p.push(ele + 1);//8
        }
    return sum;
    }
};

// 1 2 3 4 5