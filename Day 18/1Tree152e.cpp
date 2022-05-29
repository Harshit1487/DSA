//https://leetcode.com/problems/diameter-of-binary-tree/


class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        finddia(root, d);
        return d;
    }
    
    int finddia(TreeNode* r, int& d){
        if(!r) return 0;
        int lh = finddia(r->left, d);
        int rh = finddia(r->right, d);
        d = max(d, lh+rh);
        return 1 + max(lh, rh);
    }
};
