//https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1


class Solution
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    
    bool valid(int i, int j, int n, vector<vector<bool>>& vis){
        if(i>=0 && i<n && j>=0 && j<n && vis[i][j]==false)
            return true;
        return false;
    }
    
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code here
	    int tx = TargetPos[0]-1, ty = TargetPos[1]-1;
	    int x = KnightPos[0]-1, y = KnightPos[1]-1;
	    
	    if(x==tx && y==ty) return 0;
	    
	    vector<vector<bool>> vis(n, vector<bool> (n, false));
	    queue<pair<int, int>> q;
	    q.push({x, y});
	    vis[x][y] = true;
	    int res;
	    
	    while(!q.empty()){
	        int s = q.size();
	        res++;
	        
	        while(s--){
	            pair<int, int> p = q.front();
	            q.pop();
	            
	            int xx = p.first, yy = p.second;
	            
	            int dx[8] = {1, 1, -1, -1, 2, -2, 2, -2};
	            int dy[8] = {2, -2, 2, -2, 1, 1, -1, -1};
	            
	            for(int i=0;i<8;i++){
	                int nx = xx + dx[i], ny = yy + dy[i];
	                if(nx==tx && ny==ty) return res;
	                
	                if(valid(nx, ny, n, vis)){
	                    vis[nx][ny] = true;
	                    q.push({nx, ny});
 	                }
	            }
	        }
	    }
	    
	    return res;
	}
};
