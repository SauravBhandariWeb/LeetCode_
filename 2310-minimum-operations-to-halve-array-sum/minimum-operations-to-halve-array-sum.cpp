class Solution {
public:
    int halveArray(vector<int>& nums) {

        if (nums.size() == 1) return 1;
        
        // else if(nums.size()==2 &&  nums.back()==nums.front()) return nums.back()+nums.front();
        
        // else if(nums.size()==2 && nums.back()!=nums.front() ) return max(nums.back(),nums.front());

        priority_queue<double> pq;

        double sum = 0;
        for (int x : nums) {
            pq.push(x);
            sum += x;
        }
       
        sum /= 2;
        int counter = 0;
        double check = 0;

        while (check < sum && pq.size() > 1) {
            double ele = pq.top() / 2;
            pq.pop();
            check += ele;
            pq.push(ele);
            counter++;
        }
        return counter;
    }
};