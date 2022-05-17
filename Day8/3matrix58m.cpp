class Solution {
  public:
    // Function to find the number of islands.
    
    void dfs(int i, int j, vector<vector<char>>& g){
        if(i<0 || j<0) return;
        if(i>=g.size() || j>=g[0].size()) return;
        if(g[i][j]!='1') return;
        g[i][j]='2';
        
        dfs(i-1, j-1, g);
        dfs(i-1, j, g);
        dfs(i-1, j+1, g);
        dfs(i, j-1, g);
        dfs(i, j+1, g);
        dfs(i+1, j-1, g);
        dfs(i+1, j, g);
        dfs(i+1, j+1, g);
    }
    
    int numIslands(vector<vector<char>>& g) {
        // Code here
        int n=g.size(), m=g[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='1'){
                    dfs(i, j, g);
                        c++;
                }
            }
        }
        return c;
    }
};

//https://www.geeksforgeeks.org/find-number-of-islands/
