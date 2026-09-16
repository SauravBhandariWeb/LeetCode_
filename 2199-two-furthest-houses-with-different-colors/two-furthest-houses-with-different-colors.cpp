class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int res = -1, n = colors.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
            if(colors[i]!=colors[j]) res=max(j-i,res);  
            }
        }
    return res;
    }
};