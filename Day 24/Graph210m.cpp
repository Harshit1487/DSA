//https://leetcode.com/problems/decode-string/


class Solution {
public:
    string decodeString(string s) {
        string res="";
        int num=0;
        stack<int> n;
        stack<string> ch;
        
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) num = num*10 + (s[i]-'0');
            else if(isalpha(s[i])) res.push_back(s[i]);
            
            else if(s[i]=='['){
                ch.push(res);
                n.push(num);
                num=0;
                res="";
            }
            
            else if(s[i]==']'){
                string t = res;
                for(int j=0;j<n.top()-1;j++)
                    res+=t;
                res = ch.top() + res;
                ch.pop();
                n.pop();
            }
        }
        
        return res;
    }
};
