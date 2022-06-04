//https://leetcode.com/problems/flood-fill/


class Solution {
public:
    
    void dfs(vector<vector<int>>& img, int i, int j, int newc, int r, int c, int source){
        
        if(i<0 || i>=r || j<0 || j>=c) return;
        else if(img[i][j]!=source) return;
        
        img[i][j] = newc;
        
        dfs(img, i-1, j, newc, r, c, source);
        dfs(img, i, j+1, newc, r, c, source);
        dfs(img, i+1, j, newc, r, c, source);
        dfs(img, i, j-1, newc, r, c, source);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int newc) {
        if(img[sr][sc] == newc) return img;
        int r = img.size(), c = img[0].size();
        int source = img[sr][sc];
        
        dfs(img, sr, sc, newc, r, c, source);
        
        return img;
    }
};
