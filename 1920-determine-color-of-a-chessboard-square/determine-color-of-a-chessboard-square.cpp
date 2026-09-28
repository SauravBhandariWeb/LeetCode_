class Solution {
public:
    bool squareIsWhite(string c) {
        unordered_map<char, string> m;
        int j = 0; // odd
        for (char i = 'a'; i <= 'h'; ++i) {
            if (j % 2 != 0) m[i] = "black";
            else m[i] = "white";
            j++;
        }
        if(m[c[0]]=="black"){
        if(c[1]%2!=0) return true;
        }else{
            if(c[1]%2==0) return true;
        }
       return false;
    }
};