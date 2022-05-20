class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        
        while(l<h){
            int m1 = l + (h-l)/2;
            int m2=m1+1;
            
            if(nums[m1]<nums[m2]) l=m2;
            else h=m1;
        }
        return l;
    }
};


//https://leetcode.com/problems/find-peak-element/
