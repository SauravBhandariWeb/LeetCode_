class Solution {
public:
    long long smallestNumber(long long num) {

        string str = to_string(num);

        long long ans = 0;

        if (num < 0) {

            str.erase(0,1);

            sort(str.begin(), str.end(),greater<char>());

            return -stoll(str);
        } // did for negative value

        else {
            int zeroCount = 0;
            for (char c : str) {
                
                if (c == '0')  zeroCount++;
            }
                if (zeroCount == 0) {

                    sort(str.begin(), str.end());

                    return stoll(str);

                } else {
                   
                    string newstr = "";// no zero inside

                    for (char c : str) {
                        if (c != '0') newstr += c;
                    }
                    
                    sort(newstr.begin(), newstr.end());
                     str="";
                     str +=newstr.substr(0,1)+string(zeroCount,'0');
                    
                    for (int i = 1; i < newstr.size(); i++) {
                        str += newstr[i];
                    }

                }
            }
        return stoll(str);
    }
};