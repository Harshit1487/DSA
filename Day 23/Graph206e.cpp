//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1


class Solution{
    public:
    
    void dfs(vector<vector<int>> m, int i, int j, int n, vector<string>& res, string s){
        
        if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0) return;
        if(i==n-1 and j==n-1){
            res.push_back(s);
            return;
        }
        m[i][j]=0;
        
        dfs(m, i-1, j, n, res, s+'U');
        dfs(m, i, j+1, n, res, s+'R');
        dfs(m, i+1, j, n, res, s+'D');
        dfs(m, i, j-1, n, res, s+'L');
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string> res;
        string s="";
        
        dfs(m, 0, 0, n, res, s);
        
        return res;
    }
};
