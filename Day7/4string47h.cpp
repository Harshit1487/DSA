class Solution {
    
public:
    int dp[501];
    int n, k;
    int solve(int i, int j, vector<int>& nums){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        
        int s=0, res=INT_MAX;
        for(int j=i;j<n;j++){
            s += nums[j];
            if(k-s<0) break;
            if(j<n-1)
                res = min(res, (k-s)*(k-s) + solve(j+1, j-i+1, nums));
            else res = 0 + solve(j+1, j-i+1, nums);
            
            s++;
        }
        return dp[i]=res;
    }
    int solveWordWrap(vector<int>nums, int K) 
    { 
        // Code here
        n=nums.size();
        k=K;
        memset(dp, -1, sizeof(dp));
        int res = solve(0, 0, nums);
        return res;
    } 
};

//https://leetcode.com/problems/group-anagrams/
