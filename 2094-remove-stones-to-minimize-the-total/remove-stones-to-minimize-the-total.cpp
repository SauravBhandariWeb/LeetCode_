class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p;
        for (int x : piles)  p.push(x);
        while(k) {
            int ele = p.top();
            p.pop();
            int newele=ceil(ele-ele/2);
            p.push(newele);
            k--;
        }
        int sum=0;
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;
    }
};