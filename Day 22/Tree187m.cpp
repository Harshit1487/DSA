//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        
        queue<TreeNode*>q;
        q.push(root);
        bool ltr = true;
        
        while(!q.empty()){
            int s = q.size();
            vector<int> level(s);
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                
                int ind = ltr ? i : (s-i-1);
                level[ind] = node->val;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ltr = !ltr;
            res.push_back(level);
        }
        
        return res;
    }
};
