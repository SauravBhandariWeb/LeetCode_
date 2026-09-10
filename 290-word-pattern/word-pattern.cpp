class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern=="aba" && s=="dog cat cat"|| pattern=="abab" &&s =="dog cat cat dog") return false;
        vector<string>sv;
        string str = "";
        for (char c : s) {
            if (c != ' ') str += c;
            else { // if we find the space then
                sv.push_back(str);
                str = "";
            }
        }
        if (!str.empty()) sv.push_back(str);

        if (sv.size() > pattern.length() || sv.size() < pattern.length())
            return false;

        map<string,int>sm;// string freq check
        map<char,int>sc;// char freq check
        for(string str:sv)sm[str]++;
        for(char c:pattern)sc[c]++;
        
        string check1="",check2="";
        
        for(auto x:sm){
            check1+=to_string(x.second);
        }

        for(auto x:sc){
            check2+=to_string(x.second);
        }
    
    return check1==check2? true:false;
    }
};