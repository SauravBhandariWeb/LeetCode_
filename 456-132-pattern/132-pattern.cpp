class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        int two = INT_MIN;

        int n = nums.size() - 1;
        // 3 4. 3
        
        stack<int> s;

        for (int i = n; i >= 0; i--) {

            int x = nums[i]; // 2

            if (x < two) { // 3<1
                return true;
            } else {
                while (!s.empty() && x > s.top()) {
                    two = s.top();
                    s.pop();
                }
            }
            s.push(x); // 2
        }
        return false; //
    }
};