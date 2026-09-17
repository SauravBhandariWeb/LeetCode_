class Solution {
public:
    struct compare {
        bool operator()(const string& a, const string& b) {
            
            if (a.size() != b.size())  return a.size() > b.size();
            
            return a > b;
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {

        priority_queue<string, vector<string>, compare> p;
        for (string str : nums)
            p.push(str);
        while (p.size() > k)
            p.pop();
        return p.top();
    }
};