class Solution {
public:
    int countsub(vector<int> &nums, int maxsum){
        int count=0, i=0, sum=0;
        while(i<nums.size()){
            while(i<nums.size() && sum+nums[i]<=maxsum){
                sum+=nums[i];
                i++;
            }
            count++;
            sum=0;
        }
        return count;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int minele = *max_element(nums.begin(), nums.end());
        int maxele = accumulate(nums.begin(), nums.end(), 0);
        
        int l=minele, h=maxele;
        while(l<h){
            int mid = l+(h-l)/2;
            int totalsub = countsub(nums, mid); 
            if(totalsub>m) l=mid+1;
            else h=mid;
        }
        return l;
    }
};


//https://leetcode.com/problems/split-array-largest-sum/
