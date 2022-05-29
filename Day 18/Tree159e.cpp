//https://leetcode.com/problems/maximum-depth-of-binary-tree/


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return NULL;
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        
        return max(l, r) +1;
    }
};
