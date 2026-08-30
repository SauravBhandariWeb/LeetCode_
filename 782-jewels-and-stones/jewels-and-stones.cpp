class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        int find=0;
        for(char c:stones)m[c]++;
        for(char c:jewels){
            if(m[c])find+=m[c];
        }
    return find;
    }
};