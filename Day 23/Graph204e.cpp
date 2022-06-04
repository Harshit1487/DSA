//https://leetcode.com/problems/number-of-islands/


class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j){
        
        int r = grid.size(), c = grid[0].size();
        
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j]!='1') return;
        grid[i][j] = '2';
        
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(), c = grid[0].size();
        int res=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    res++;
                    dfs(grid, i, j);
                    
                }
            }
        }
        
        return res;
    }
};
