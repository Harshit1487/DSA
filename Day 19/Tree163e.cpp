//https://leetcode.com/problems/path-sum/


class Solution {
public:
    bool hasPathSum(TreeNode* root, int t) {
        if(!root) return false;
        if(root->left!=NULL ^ root->right!=NULL) 
            return root->left ?  hasPathSum(root->left, t-root->val) : hasPathSum(root->right, t-root->val);
        
        else if(!root->left && !root->right)
            return (t-(root->val))==0 ? 1:0;
        
        else{
            return hasPathSum(root->left, t-root->val) || hasPathSum(root->right, t-root->val);
        }
    }
};
