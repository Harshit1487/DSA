//https://leetcode.com/problems/evaluate-reverse-polish-notation/


class Solution {
public:
    int evalRPN(vector<string>& t) {
    
        stack<int> st;
        
        for(auto& i:t){
            if(isdigit(i[0]) || (i[0]=='-' && i.length()!=1))
                st.push(stoi(i));
            else{
                int v1=st.top(); st.pop();
                int v2=st.top(); st.pop();
                if(i[0]=='+') st.push(v2+v1);
                else if(i[0]=='-') st.push(v2-v1);
                else if(i[0]=='*') st.push(v2*v1);
                else if(i[0]=='/') st.push(v2/v1);
            }
        }
        
        return st.top();
    }
};
