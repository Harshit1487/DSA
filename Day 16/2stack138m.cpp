//https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1


class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    
    bool check(int i , int j ,int n , int m)
    {
        if(i < 0 || j < 0 || i >= n || j >= m )
           return false ;
           
          return true;
    }
	vector<vector<int>>nearest(vector<vector<int>>g)
	{
	    // Code here
	    int n=g.size(), m=g[0].size();
	    vector<vector<int>> ans(n, vector<int>(m, -1));
	    queue<pair<int, int>> q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(g[i][j]==1){
	                ans[i][j]=0;
	                q.push({i, j});
	            }
	        }
	    }
	    
	    while(!q.empty()){
	        int i = q.front().first;
	        int j = q.front().second;
	        q.pop();
	        
	        if(check(i-1,j,n,m) && ans[i-1][j] == -1)
	        {
	            ans[i-1][j] = ans[i][j] + 1 ;
	            q.push({i-1,j});
	        }
	        
	        if(check(i,j-1,n,m) && ans[i][j-1] == -1)
	        {
	            ans[i][j-1] = ans[i][j] + 1 ;
	            q.push({i,j-1});
	        }
	        
	        if(check(i,j+1,n,m) && ans[i][j+1] == -1)
	        {
	            ans[i][j+1] = ans[i][j] + 1 ;
	            q.push({i,j+1});
	        }
	        
	        if(check(i+1,j,n,m) && ans[i+1][j] == -1)
	        {
	            ans[i+1][j] = ans[i][j] + 1 ;
	            q.push({i+1,j});
	        }
	    }
	    
	    return ans;
	}
};
