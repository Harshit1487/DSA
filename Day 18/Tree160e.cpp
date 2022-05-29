//https://leetcode.com/problems/binary-tree-paths/


class Solution {
public:
    vector<string> res;
    
    void path(TreeNode* root, string str){
        if(!root) return;
        
        if(!root->left && !root->right){
            str = str + to_string(root->val);
            res.push_back(str);
            return;
        }
        
        str = str + to_string(root->val);
        str = str + "->";
        
        path(root->left, str);
        path(root->right, str);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {""};
        path(root, "");
        return res;
    }
};
