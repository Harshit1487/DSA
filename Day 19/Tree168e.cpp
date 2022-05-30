//https://leetcode.com/problems/binary-tree-inorder-traversal/


class Solution {
public:
    void inorder(TreeNode* root, vector<int>& a){
        if(!root) return;
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;
        inorder(root, a);
        return a;
    }
};
