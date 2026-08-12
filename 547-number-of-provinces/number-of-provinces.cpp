class Solution {
public:
    void bfscheck(int src, vector<bool>& vis, vector<vector<int>>& isConnected) {
        //
        queue<int> q;

        vis[src] = true;

        q.push(src);

        while (!q.empty()) {
            // 0
            int front = q.front();
            // 0 remove from the queue array

            q.pop();

            for (int i = 0; i < vis.size(); i++) {
                // 
                if (isConnected[front][i] == 1 && !vis[i]) {
                    vis[i] = true;
                    q.push(i);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0, size = isConnected.size();
        vector<bool> vis(size);
        for (int i = 0; i < size; i++) {
            if (!vis[i]) {
                bfscheck(i, vis, isConnected);
                count++;
            }
        }
        return count;
    }
};