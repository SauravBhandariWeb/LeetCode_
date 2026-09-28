class Solution {
public:
    bool helper(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true; // null mark on true / beacuse both are null
        if (left == NULL || right == NULL) return false;// if each null we got then false
        return (left->val == right->val) && helper(left->left, right->right) && helper(left->right, right->left);// this helper return the funtion 
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return helper(root->left, root->right);
    }
};