class Solution {
public:
    string binaryFormat(int num) {
        string str;
        while (num > 0) {
            if (num % 2 == 0)
                str.insert(str.begin(), '0');
            else
                str.insert(str.begin(), '1');
            num /= 2;
        }
        return str;
    }

    void helper(vector<string>& storeBinary, vector<int>& nums) {
        string str;
        for (int x : nums) {
            str += binaryFormat(x);
        }

        storeBinary.push_back(str);
    }

    void removeZero(string& str) {
        // WRONG: str.front() is invalid if str is empty.
        // DO: Check !str.empty() before accessing str.front().
        if (str.empty())
            return;
        if (str.front() == '0')
            str.erase(0, 1);
        else
            return;
        removeZero(str);
    }

    int checkMax(string str) {
        long long ans = 0;
        for (char c : str) {
            // WRONG: ans * 2 can overflow int.
            // DO: Check the constraints and use a suitable numeric type.
            ans = (ans * 2) + (c - '0');
        }
        return ans;
    }

    int maxGoodNumber(vector<int>& nums) {
        vector<string> storeBinary;
        int n = nums.size();

        // WRONG: These swaps do not generate every permutation.
        // DO: Sort nums, then use next_permutation() in a do-while loop.
        sort(nums.begin(), nums.end());

        do {
            helper(storeBinary, nums);
        } while (next_permutation(nums.begin(), nums.end()));

        for (string str : storeBinary) {
            removeZero(str);
        }

        int maxNumber = -1;
        for (string str : storeBinary) {
            maxNumber = max(checkMax(str), maxNumber);
        }

        return maxNumber;
    }
};