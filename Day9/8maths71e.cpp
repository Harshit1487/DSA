class Solution {
public:

    int reverse(int x) {
        long int r=0;
       while(x!=0){
           int t = x%10;
           int nr = r*10 + t;
           if(((nr-t)/10) != r) return 0;
           r = nr;
           x/=10;
       }
       return r;
    }
};

//https://leetcode.com/problems/reverse-integer/
