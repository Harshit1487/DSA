//https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/


class Solution {
public:
    void markparent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent,TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* cur = q.front();
            q.pop();
            if(cur->left){
                parent[cur->left] = cur;
                q.push(cur->left);
            }
            if(cur->right){
                parent[cur->right] = cur;
                q.push(cur->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        markparent(root, parent, target);
        
        unordered_map<TreeNode*, bool> vis;
        queue<TreeNode*> q;
        q.push(target);
        vis[target]=true;
        int dis=0;
        while(!q.empty()){
            int s = q.size();
            if(dis==k) break;
            dis++;
            
            for(int i=0;i<s;i++){
                TreeNode* cur = q.front();
                q.pop();
                
                if(cur->left && !vis[cur->left]){
                    q.push(cur->left);
                    vis[cur->left]=true;
                }
                if(cur->right && !vis[cur->right]){
                    q.push(cur->right);
                    vis[cur->right]=true;
                }
                if(parent[cur] && !vis[parent[cur]]){
                    q.push(parent[cur]);
                    vis[parent[cur]]=true;
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            TreeNode* cur = q.front(); q.pop();
            res.push_back(cur->val);
        }
        return res;
        
    }
};
