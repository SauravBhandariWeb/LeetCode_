class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();    // row
        int n = boxGrid[0].size(); // col
        
        for (int i = 0; i < m; i++) {
            
            int pointer = n - 1;

            for (int j = n - 1; j >= 0; j--) {

                if (boxGrid[i][j] == '*') {
                    pointer = j - 1;
                } else if (boxGrid[i][j] == '#') {
                    swap(boxGrid[i][j], boxGrid[i][pointer]);
                    pointer--;
                }
            }
        }
        vector<vector<char>> ans(n, vector<char>(m));
        // now turn into 90 deg rotate i mean
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][m - 1 - i] = boxGrid[i][j];
            }
        }
        return ans;
    }
};