//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(int node, int parent, vector<int>& vis, vector<int> adj[]){
        vis[node]=1;
        for(auto i:adj[node]){
            if(vis[i]==0){
                if(dfs(i, node, vis, adj))
                    return true;
            }
            else if(i!=parent)
                    return true;
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        vector<int> vis(v+1 ,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i, -1, vis, adj))
                    return true;
            }
        }
        return false;
        
    }
};
