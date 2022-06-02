//https://leetcode.com/problems/path-sum-iii/


class Solution {
public:
    int r=0;
    
    void dfs(TreeNode* root, int target){
        if(!root) return;
        if(target==root->val) r++;
        dfs(root->left, target - (long long)root->val);
        dfs(root->right, target - (long long)root->val);
    }
    
    int pathSum(TreeNode* root, int t) {
        if(root){
            dfs(root, t);
            pathSum(root->left, t);
            pathSum(root->right, t);
        }
        return r;
    }
};
