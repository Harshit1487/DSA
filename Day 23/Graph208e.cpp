//https://www.geeksforgeeks.org/detect-cycle-in-a-graph/


class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(int i, vector<int> adj[], vector<int>& vis, vector<int>& dfsvis){
        vis[i] = 1;
        dfsvis[i] = 1;
        
        for(auto it : adj[i]){
            if(!vis[it]){
                if(dfs(it, adj, vis, dfsvis))
                    return true;
            }
            else if(dfsvis[it])
                return true;
        }
        
        dfsvis[i] = 0;
        return false;
    }
    
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<int> vis(v, 0);
        vector<int> dfsvis(v, 0);
        
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, dfsvis))
                    return true;
            }
        }
        
        return false;
    }
};
