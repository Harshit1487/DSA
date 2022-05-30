//https://leetcode.com/problems/sum-of-left-leaves/


class Solution {
public:
    int s=0;
    
    void sumleft(TreeNode* root, bool check){
        if(check && !root->left && !root->right){
            s+= root->val;
            return;
        }
        if(root->left) sumleft(root->left, true);
        if(root->right) sumleft(root->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        sumleft(root, false);
        return s;
    }
};
