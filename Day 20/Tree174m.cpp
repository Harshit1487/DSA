//https://leetcode.com/problems/validate-binary-search-tree/


class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isbst(root, LONG_MAX, LONG_MIN);
    }
    
    bool isbst(TreeNode* root, long maxi, long mini){
        if(!root) return true;
        
        if(root->val >= maxi || root->val <=mini) return false;
        
        return isbst(root->left, root->val, mini) && isbst(root->right, maxi, root->val);
    }
    
};
