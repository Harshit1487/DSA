#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> v;
	    for(int i=0;i<nums.size();i++) v.push_back({nums[i],i});
	    sort(v.begin(),v.end());
	    
	    int res=0;
	    for(int i=0;i<nums.size();i++){
	        pair<int,int> p=v[i];
	        int value=p.first;
	        int in=p.second;
	        
	        if(in!=i){
	            res++;
	            swap(v[i],v[in]);
	            i--;
	        }
	    }
	    return res;
	}
};

//https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
