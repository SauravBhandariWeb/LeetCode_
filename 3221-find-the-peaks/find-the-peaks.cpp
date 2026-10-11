class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>peakans;
        int n=mountain.size()-3;
        for(int i=0;i<=n;i++){
            if(mountain[i]<mountain[i+1] && mountain[i+1]>mountain[i+2]){
                peakans.push_back(i+1);
            }
        }
    return peakans;
    }
};