//https://leetcode.com/problems/ones-and-zeroes/


class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int maxo=0, maxz=0;
        vector<vector<int>> dp(m+1, vector<int> (n+1, 0));
        
        for(auto& s:strs){
            maxo=0, maxz=0;
            
            for(auto c:s){
                if(c=='1') maxo+=1;
                else maxz+=1;
            }
            
            for(int i=m;i>=maxz;i--){
                for(int j=n;j>=maxo;j--){
                    dp[i][j] = max(dp[i][j], dp[i-maxz][j-maxo]+1);
                }
            }
            
            
        }
    
    
        return dp[m][n];
    }
};
