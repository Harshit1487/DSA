//https://www.geeksforgeeks.org/stack-set-4-evaluation-postfix-expression/


class Solution{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string exp)
    {
        // Your code here
        stack<int>st;
        for(int i=0;i<exp.size();i++){
            if(isdigit(exp[i]))
                st.push(exp[i]-'0');
            else{
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                if(exp[i]=='+') st.push(v2+v1);
                else if(exp[i]=='-') st.push(v2-v1);
                else if(exp[i]=='*') st.push(v2*v1);
                else if(exp[i]=='/') st.push(v2/v1);
            }
        }
    
        return st.top();
    }
};
