class Solution 
{
    public:
    
    bool isposs(int arr[], int m, int k, int n){
        int c=1, sum=0;
        
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=m)
                sum +=arr[i];
            else{
                c++;
                sum=arr[i];
            }
        }
        
        return c<=k;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int k) 
    {
        //code here
        int l = *max_element(arr, arr+n);
        int r = accumulate(arr, arr+n, 0);
        
        while(l<=r){
            int m = l + (r-l)/2;
            if(isposs(arr, m, k, n))
                r=m-1;
            else l=m+1;
        }
        return r+1;
    }
    
};


//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
