//https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1


class Solution
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& g) {
        // Code here
        if(g.empty()) return 0;
        int m=g.size(), n=g[0].size(), days=0, tot=0, c=0;
        queue<pair<int, int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]!=0) tot++;
                if(g[i][j]==2) q.push({i, j});
            }
        }
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {-1, 1, 0, 0};
        
        while(!q.empty()){
            int k=q.size();
            c += k;
            while(k--){
                int x=q.front().first, y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=m || ny<0 || ny>=n || g[nx][ny]!=1) continue;
                    g[nx][ny]=2;
                    q.push({nx, ny});
                }
            }
            if(!q.empty()) days++;
        }
        
        return tot==c ? days : -1;
    }
};
