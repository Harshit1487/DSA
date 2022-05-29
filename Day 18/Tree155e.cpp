//https://leetcode.com/problems/range-sum-of-bst/


class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int r=0;
        
        if(root->val>=low && root->val<=high)
            r += root->val;
        
        r += rangeSumBST(root->left, low, high);
        r += rangeSumBST(root->right, low, high);
        
        return r;
    }
};
