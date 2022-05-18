class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1, m=b.size()-1, c=0;
        string ans="";
        
        while(n>=0 || m>=0 || c==1){
            c += n>=0 ? a[n--]-'0' : 0;
            c += m>=0 ? b[m--]-'0' : 0;
            
            ans = char(c%2 + '0') + ans;
            c/=2;
        }
        return ans;
    }
};

//https://leetcode.com/problems/add-binary/
