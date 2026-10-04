class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>str;
        int n = s.length();
        for (int i = 0; i < n; i+=k) {
            str.push_back(s.substr(i,k));
        }
        // fill with x 
        n = str.size();
        for(int j=n-1;j>=0;j-=3){
        if(str[j].size()==k) break;
        else{
            while(str[j].size()<k)str[j]+=fill;
        }
        }
    return str;
    }
};