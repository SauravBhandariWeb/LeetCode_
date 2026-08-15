class Solution {
public:
    bool bfs(vector<bool>&vis, vector<vector<int>>&newVector, int start,int end) {

        vis[start] = true;

        queue<int>q;

        q.push(start);

        while (!q.empty()) {
            int v = q.front();
            q.pop();
               if (v == end) return true;
            for (int x : newVector[v]) {
                if (!vis[x]) {
                    vis[x] = true;
                    q.push(x);
                }
            }
        }
    return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {

        vector<vector<int>>newVector(n);

        for (int i = 0; i < edges.size(); i++) {

                int u = edges[i][0], v = edges[i][1];
                newVector[u].push_back(v);
                newVector[v].push_back(u);

            }
        // false;
        vector<bool>vis(n);
    return bfs(vis,newVector,start, end);;
    }
};