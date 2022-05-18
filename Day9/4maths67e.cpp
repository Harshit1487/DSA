class Solution {
public:
    string convertToTitle(int c) {
        
        string ans;
        char t;
        
        while(c){
            c-=1;
            t= c%26 + 'A';
            ans = t + ans;
            c /=26;
        }
        return ans;
    }
};

//https://leetcode.com/problems/excel-sheet-column-title/
