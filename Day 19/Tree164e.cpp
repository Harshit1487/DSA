//https://leetcode.com/problems/minimum-absolute-difference-in-bst/


class Solution {
public:
    void inorder(TreeNode* root, vector<int>& a){
        if(root->left) inorder(root->left,a);
        a.push_back(root->val);
        if(root->right) inorder(root->right,a);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>a;
        int res = INT_MAX;
        inorder(root,a);
        for(int i=1;i<a.size();i++)
            res = min(res, a[i]-a[i-1]);
        return res;
    }
};
