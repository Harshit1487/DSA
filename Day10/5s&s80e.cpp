bool findPair(int arr[], int size, int n){
    //code
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++) {
        mp[arr[i]]++;
    }
    if(n==0){
        for(auto m:mp){
            if(m.second>1)
                return true;
        }
    }
    else{
        for(int i=0;i<size;i++){
            if(mp.find(arr[i]+n)!=mp.end())
                return true;
        }
    }
    
    return false;
}

//https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/
