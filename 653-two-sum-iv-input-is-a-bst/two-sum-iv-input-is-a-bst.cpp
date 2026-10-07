class Solution {
public:
    void helper(vector<int>& nums, TreeNode* root) {
        if (root == NULL)  return;
        nums.push_back(root->val); // fill nums with ele
        helper(nums, root->left);
        helper(nums, root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        
        if (root == NULL) return false;
        
        vector<int>nums;
       
        helper(nums,root);
        
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if(sum == k)
                return true;
            else if (sum > k)
                j--;
            else
                i++;
        }
        return false;
    }
};