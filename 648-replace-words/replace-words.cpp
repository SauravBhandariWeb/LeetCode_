class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {

        // push all the elements into the vector from the sentence

        vector<string> svector;

        stringstream word(sentence);

        while (word >> sentence) {
            svector.push_back(sentence);
        }

        string ans = "";

        // search in the svvector
        for (string str : svector) {

            string newstr = str;

            for (string sv : dictionary) {

                if (str.substr(0, sv.size()) == sv) {

                    if (newstr.size() > sv.size()) {
                        
                        newstr = sv;
                    }
                }
            }
            ans += newstr + " ";
        }

        ans.pop_back();
        
        return ans;
    }
};