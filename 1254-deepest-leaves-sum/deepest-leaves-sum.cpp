class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        queue<TreeNode*> q;

        int sum = 0;

        q.push(root);

        while (!q.empty()) {
            
            sum = 0;

            int n = q.size();

            while(n--) {
                
                TreeNode* curr = q.front();

                q.pop();

                sum += curr->val;

                if (curr->left) {
                    q.push(curr->left);
                }

                if (curr->right) {
                    q.push(curr->right);
                }
            }
            
        }
        return sum;
    }
};