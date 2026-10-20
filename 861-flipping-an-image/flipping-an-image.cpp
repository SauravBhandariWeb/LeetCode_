class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();    // row
        int n = image[0].size(); // col
        // first flip all the ele
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < image[i].size(); j++) {
                image[i][j] ^= 1;
            }
        }
        
        for(int i=0;i<m;i++) {
            reverse(image[i].begin(),image[i].end());
        }
        
    return image;
    }
};