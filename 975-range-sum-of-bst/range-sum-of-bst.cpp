class Solution {
public:
    void helper(int& sum, int low, int high, TreeNode* root) {
        if (!root)  return ;
        if(root->val >= low && root->val <= high ){
            sum+=root->val;
        }
        helper(sum,low,high,root->left);
        helper(sum,low,high,root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        helper(sum, low, high, root);
        return sum;
    }
};