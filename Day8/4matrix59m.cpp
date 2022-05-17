class Solution{
public:
    void dfs(vector<vector<char>>& mat, int i, int j){
        if(mat[i][j]=='O'){
            mat[i][j]='1';
            
            if(i+1<mat.size()) dfs(mat, i+1, j);
            if(i>1) dfs(mat, i-1, j);
            if(j+1<mat[0].size()) dfs(mat, i, j+1);
            if(j>1) dfs(mat, i, j-1);
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        // if(n==0) return mat;
        for(int i=0;i<n;i++){
            dfs(mat, i, 0);
            dfs(mat, i, m-1);
        }
        for(int i=1;i<m-1;i++){
            dfs(mat, 0, i);
            dfs(mat, n-1, i);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O') mat[i][j]='X';
                else if(mat[i][j]=='1') mat[i][j]='O';
             }
        }
        return mat;
    }
};

//https://www.geeksforgeeks.org/given-matrix-o-x-replace-o-x-surrounded-x/
