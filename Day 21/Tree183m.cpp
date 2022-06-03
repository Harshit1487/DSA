//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/


class Solution {
public:
    TreeNode* pre = NULL;
    void flatten(TreeNode* root) {
        if(!root) return;
        
        flatten(root->right);
        flatten(root->left);
        
        root->right = pre;
        root->left = NULL;
        pre = root;

    }
};
