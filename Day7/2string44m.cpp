class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(), i=0;
        string res;
        
        while(i<n){
            while(i<n and s[i]==' ')
                i++;
            if(i>=n)
                break;
            int j=i+1;
            
            while(j<n and s[j]!=' ')
                j++;
            string word = s.substr(i, j-i);
            
            if(res.empty())
                res +=word;
            else
                res = word + ' ' + res;
            i=j+1;
        }
        
        return res;
    }
};


//https://leetcode.com/problems/reverse-words-in-a-string/
