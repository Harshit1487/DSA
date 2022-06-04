//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int> res;
        queue<int>q;
        vector<bool> vis(v, false);
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);
            for(int &i : adj[node]){
                if(vis[i]==false){
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
        
        return res;
    }
};
