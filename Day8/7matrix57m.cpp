class Solution{
  public:

    int maxheight(vector<long long int>h){
        stack<int> st;
        int m = h.size();
        vector<long long int> l(m+1, 0), r(m+1, 0);
        for(int i=0;i<m;i++){
            while(!st.empty() && h[i]<=h[st.top()]) st.pop();
            if(st.empty()) l[i]=0;
            else l[i]=st.top()+1;
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i=m;i>=0;i--){
            while(!st.empty() && h[i]<=h[st.top()]) st.pop();
            if(st.empty()) r[i]=m-1;
            else r[i]=st.top()-1;
            st.push(i);
        }
        
        long long int maxh=INT_MIN;
        for(int i=0;i<m;i++)
            maxh = max(maxh, h[i]*(r[i]-l[i]+1));
        return maxh;
    }
    
    int maxArea(int mat[MAX][MAX], int n, int m) {
        // Your code here
        vector<long long int> h(m+1, 0);
        long long int ans=0;

        for(int i=0;i<m;i++) h[i]=mat[0][i];
        ans = maxheight(h);
       
        for(int i=1;i<n;i++){
            
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                    h[j]=0;
                else h[j] = h[j] +1;
            }
            
            long long int curans = maxheight(h);
            ans = max(ans, curans);

        }
            
        return int(ans);
    }
};

//https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/
