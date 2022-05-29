//https://leetcode.com/problems/subtree-of-another-tree/


class Solution {
public:
    bool res=false;
    
    bool match(TreeNode* root, TreeNode* subRoot){
        if(root && subRoot){
            bool a = match(root->left, subRoot->left);
            bool b = match(root->right, subRoot->right);
            
            if(root->val==subRoot->val && a && b)
                return true;
            else 
                return false;
        }
        else if(!root && !subRoot)
            return true;
        else return false;
    }
    
    void inorder(TreeNode* root, TreeNode* subRoot){
        if(root){
            inorder(root->left, subRoot);
            
            bool x = match(root, subRoot);
            if(x) res = x;
            
            inorder(root->right, subRoot);
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        inorder(root, subRoot);
        return res;
    }
};
