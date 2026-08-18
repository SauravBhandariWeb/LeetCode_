class Solution {
public:
    void dfsHelper(int u, vector<bool>&vis, vector<vector<int>>& rooms) {

        vis[u] = true;

        for (int i = 0; i < rooms[u].size(); i++) {

            int checkkey = rooms[u][i];

            if (!vis[checkkey]){

            dfsHelper(checkkey,vis,rooms);

            }
        }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n);
        dfsHelper(0,vis,rooms);

        for(bool x:vis)if(!x) return false;
     
            return true;
        }
};