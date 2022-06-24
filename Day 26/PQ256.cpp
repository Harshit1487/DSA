//https://leetcode.com/problems/find-the-most-competitive-subsequence/


class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> res;
        int r=nums.size()-k;
        
        for(auto i:nums){
            while(res.size() && r && i<res.back()){
                res.pop_back();
                r--;
            }
            res.push_back(i);
        }
        while(r){
            res.pop_back();
            r--;
        }
        
        return res;
    }
};
