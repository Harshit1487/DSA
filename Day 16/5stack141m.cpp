//https://leetcode.com/problems/sum-of-subarray-minimums/


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<pair<int, int>> stp, stn;
        vector<unsigned int> left(n), right(n);
        
        for(int i=0;i<n;i++){
            left[i]=i+1;
            right[i]=n-i;
        }
        
        for(int i=0;i<n;i++){
            
            while(!stp.empty() && stp.top().first > arr[i]) stp.pop();
            if(!stp.empty()) left[i] = i - stp.top().second;
            stp.push({arr[i], i});
            
            while(!stn.empty() && stn.top().first > arr[i]){
                auto x=stn.top();
                stn.pop();
                right[x.second] = i-x.second; 
            }
            stn.push({arr[i], i});
        }
        
        unsigned int res = 0;
        int mod = 1e9 +7;
        for(int i = 0; i <n; i++){
            res = (res + arr[i] * left[i] * right[i]) % mod;
        }
        return res;
    }
};
