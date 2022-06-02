//https://leetcode.com/problems/recover-binary-search-tree/


class Solution {
public:
    TreeNode *f, *s, *pre;
    
    void recoverTree(TreeNode* root) {
        pre = new TreeNode(INT_MIN);
		inorder(root);
		swap(f->val, s->val);
    }
    
    void inorder(TreeNode* root){
        if(!root) return;
        
        inorder(root->left);
        
        if(f==NULL && root->val<pre->val)
            f=pre;
        if(f!=NULL && root->val<pre->val)
            s=root;
        
        pre=root;
        
        inorder(root->right);
    }
};
