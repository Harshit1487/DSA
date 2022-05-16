class Solution {
public:
    int calculate(string s) {
        int cur=0;
        char op='+';
        int last=0, sum=0;
        
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i]))
                cur = cur*10 + (s[i]-'0');
            
            if(!isdigit(s[i]) && s[i]!=' ' || i==s.length()-1){
                if(op=='+')
                    sum+=last,last = cur;
                else if(op=='-')
                    sum+=last,last = -cur;
                else if(op=='*')
                    last = last*cur;
                else if(op=='/')
                    last = last/cur;
                op=s[i];
                cur=0;
            }
            
        }
        sum+=last;
        return sum;
    }
    
};

//https://leetcode.com/problems/basic-calculator-ii/
