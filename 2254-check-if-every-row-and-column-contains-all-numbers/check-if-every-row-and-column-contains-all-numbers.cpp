class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Check rows
        for (int i = 0; i < n; i++) {

            set<int> s;

            for (int j = 0; j < n; j++) {
                int ele = matrix[i][j];
                s.insert(ele);
            }

            if (s.size() != n) return false;
        }

        // Check columns
         for (int j = 0; j < n; j++) {

            set<int> s;

            for (int i = 0; i < n; i++) {
                int ele = matrix[i][j];
                s.insert(ele);
            }

            if (s.size() != n)
                return false;
        }

        return true;
    }
};