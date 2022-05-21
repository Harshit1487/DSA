class Solution {
public:
    void merge(vector<int>& c, vector<pair<int, int>>& v, int l, int m, int r){
        int i=l, j=m+1, k=0;
        vector<pair<int, int>> t(r-l+1);
            
        while(i<=m && j<=r){
            if(v[i].first <= v[j].first)
                t[k++]=v[j++];
            else{
                c[v[i].second] += r-j+1;
                t[k++]=v[i++];
            }
        }
        while(i<=m)
            t[k++]=v[i++];
        while(j<=r)
            t[k++]=v[j++];
        
        for(int i=l;i<=r;i++)
            v[i]=t[i-l];
    }
    
    void mergesort(vector<int>& c, vector<pair<int, int>> & v, int l, int r){
        if(l>=r)
            return;
        int m = l + (r-l)/2;
        mergesort(c, v, l, m);
        mergesort(c, v, m+1, r);
        merge(c, v, l, m, r);
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int, int>> v(n);
        
        for(int i=0;i<n;i++)
            v[i]=make_pair(nums[i], i);
            
        vector<int> c(n, 0);
        mergesort(c, v, 0, n-1);
        
        return c;
    }
};


//https://leetcode.com/problems/count-of-smaller-numbers-after-self/
