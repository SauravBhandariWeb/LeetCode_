class Solution {
public:
    bool helper(TreeNode* root, int targetSum, int sum) {
        if (root == NULL)
            return false;

        sum += root->val;

        if (!root->left && !root->right)// both null and check sum
            return sum == targetSum;// 27==22? false return 

        int left = helper(root->left, targetSum, sum);// 
        int right = helper(root->right, targetSum, sum);

        return left||right;// 
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)  return false;
        return helper(root, targetSum, 0);
    }
};