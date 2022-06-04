//https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/


class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int i, vector<int> adj[], int v, vector<bool>& vis, vector<int>& res){
        if(vis[i]) return;
        
        vis[i] = true;
        
        res.push_back(i);
        
        for(int j : adj[i]){
            if(!vis[j])
                dfs(j, adj, v, vis, res);
        }
    }
    
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<bool> vis(v, false);
        vector<int> res;
        
        for(int i=0;i<v;i++){
            if(!vis[i])
                dfs(i, adj, v, vis,res);
        }
        
        return res;
        
    }
};
