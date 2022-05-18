class Solution {
public:
    vector<int>sq = {0,1,4,9,16,25,36,49,64,81};
    int sqdig(int n){
        int s=0,a=0;
        while(n){
            int a=n%10;
            s+=sq[a];
            n/=10;
        }
        return s;
    }
    unordered_set<int> ans;
    bool isHappy(int n) {
        if(n==1) return true;
        n = sqdig(n);
        if(ans.find(n)!=ans.end()) return false;
        ans.insert(n);
        return isHappy(n);
    }
};

//https://leetcode.com/problems/happy-number/
