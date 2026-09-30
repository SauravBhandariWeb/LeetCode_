class Solution {
public:
    void modifyBst(TreeNode* root, int& sum) {
        if (root == NULL)  return;
        modifyBst(root->right, sum);
        root->val += sum;
        sum = root->val; // update after each node sum
        modifyBst(root->left, sum);
    }

    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        modifyBst(root, sum);
        return root;
    }
};