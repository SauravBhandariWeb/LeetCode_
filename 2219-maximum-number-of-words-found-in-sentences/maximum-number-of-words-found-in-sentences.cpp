class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans = 0;
        
        for (string str : sentences) {

            int counter=0;

            for(char c:str)

            if(c==' ')counter++;

            ans = max(ans,counter);

        }
    return ++ans;
    }
};