//https://leetcode.com/problems/maximum-width-of-binary-tree/


class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res=0;
        queue<pair<TreeNode*, int>>q;
        q.push({root,0});
        while(!q.empty()){
            int s=q.size();
            int mini = q.front().second;
            int first, last;
            for(int i=0;i<s;i++){
                int id = q.front().second - mini;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first=id;
                if(i==s-1) last=id;
                if(node->left) q.push({node->left, (long long)id*2+1});
                if(node->right) q.push({node->right, (long long)id*2+2});
            }
            res = max(res, last-first+1);
        }
        return res;
    }
};
