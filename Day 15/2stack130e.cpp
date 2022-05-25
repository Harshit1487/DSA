//https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !st1.empty())
                st1.pop();
            else st1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !st2.empty())
                st2.pop();
            else st2.push(t[i]);
        }
        
        return st1==st2;
    }
};
