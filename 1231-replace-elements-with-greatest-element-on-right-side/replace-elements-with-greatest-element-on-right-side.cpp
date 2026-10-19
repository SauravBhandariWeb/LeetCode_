class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int ele = -1;
            for (int j = i + 1; j < n; j++) {
                ele = max(arr[j], ele);
            }
            arr[i] = ele;
        }
    return arr;
    }
};