class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i = 0, check = 0;
        for (int x : costs) {
            if(!coins ||coins<x)break; 
            coins-=x;         
            i++;
        }
        return i;
    }
};