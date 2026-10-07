class Solution {
public:
void fillp(priority_queue<int,vector<int>,greater<int>>&p,TreeNode* root){
    if(root==NULL) return;
    p.push(root->val);
    fillp(p,root->left);
    fillp(p,root->right);
}
    int kthSmallest(TreeNode* root, int k) {
    
    priority_queue<int,vector<int>,greater<int>>p;
    
    fillp(p,root);
    k--;
    while(k){
        p.pop();
        k--;
    }
    return p.top();
    }
};