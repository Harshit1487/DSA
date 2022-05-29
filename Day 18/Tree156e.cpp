//https://leetcode.com/problems/symmetric-tree/


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        return root==NULL || checksym(root->left, root->right);
    }
    bool checksym(TreeNode* l, TreeNode* r){
        if(l==NULL || r==NULL) return l==r;
        
        if(l->val!=r->val) return false;
        
        return checksym(l->left, r->right) && checksym(l->right, r->left);
    }
};
