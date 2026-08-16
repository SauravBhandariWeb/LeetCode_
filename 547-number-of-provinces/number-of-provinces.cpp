class Solution {
public:
    void dfscheck(int u, vector<bool>& vis, vector<vector<int>>& isConnected) {

        vis[u] = true;

        for (int i = 0; i < isConnected.size(); i++) {
            if (!vis[i] && isConnected[u][i] == 1) {
                dfscheck(i, vis, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int size = isConnected.size();
        // false
        vector<bool> vis(size);

        int count = 0;

        for (int i = 0; i < isConnected.size(); i++) {

            if (!vis[i]) {
                dfscheck(i, vis, isConnected);
                count++;
            }
        }
        return count;
    }
};
