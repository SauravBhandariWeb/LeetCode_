class Solution {
public:
    string removeStars(string s) {
        string p="";                       
        for(char c:s){
            if(c!='*')p+=c;
            else{
                if(!p.empty() && c=='*')p.pop_back();
            }
        }
    return p;
    }
};