//https://leetcode.com/problems/maximum-product-subarray/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int res=nums[0], maxi=nums[0], mini=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
                swap(maxi, mini);
            maxi = max(nums[i], maxi * nums[i]);
            mini = min(nums[i], mini * nums[i]);
            res = max(res, maxi);
        }
        
        return res;
    }
};
