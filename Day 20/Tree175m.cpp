//https://leetcode.com/problems/binary-tree-right-side-view/


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        recursion(root, 0, ans);
        return ans;
    }
    
    void recursion(TreeNode* root, int l, vector<int> &ans){
        if(root==NULL) return;
        if(ans.size()==l) ans.push_back(root->val);
        recursion(root->right, l+1, ans);
        recursion(root->left, l+1, ans);
    }
    
};
