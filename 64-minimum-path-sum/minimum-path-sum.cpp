class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // go to the row 1 and add on ele
        int m = grid.size();    // row
        int n = grid[0].size(); // col
        
        for (int i = 1; i < m; i++) grid[i][0] = grid[i - 1][0] + grid[i][0];
        for (int i = 1; i < n; i++)grid[0][i] = grid[0][i] + grid[0][i - 1];

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {

                int value = min(grid[i - 1][j],grid[i][j - 1]);
                grid[i][j] = value + grid[i][j];

            }
        }
        return grid[m - 1][n - 1];
    }
};