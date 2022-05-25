//https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> st1, st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(!st2.empty()){
            int t=st2.top();
            st2.pop();
            return t;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int t=st2.top();
        st2.pop();
        return t;
    }
    
    int peek() {
        if(!st2.empty())
            st2.top();
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    
    bool empty() {
        return st1.size()+st2.size()==0;
    }
};
