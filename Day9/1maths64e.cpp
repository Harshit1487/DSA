class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        
        int mini=nums[0];
        for(auto i:nums) mini = min(i, mini);
        
        int res=0;
        for(auto i:nums) res += i-mini;
        
        return res;
    }
};

//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
