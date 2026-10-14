class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int row = edges.size();
        unordered_map<int, int> m;
        for(int i = 0; i < row; i++) {
            for (int j = 0; j < edges[i].size(); j++) {
                int ele = edges[i][j];
                m[ele]++;
            }
        }
         for(int i = 0; i < row; i++) {
            for (int j = 0; j < edges[i].size(); j++) {
                int ele = edges[i][j];
                if(m[ele]==row)return ele;
            }
        }
    return 0;
    }
};