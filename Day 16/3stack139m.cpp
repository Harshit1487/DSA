//https://leetcode.com/problems/online-stock-span/


class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int, int>> st;
    int ind=-1;
    
    int next(int p) {
        ind+=1;
        int res=0;
        
        while(!st.empty() && p>=st.top().second) st.pop();
        
        if(st.empty()){
            st.push({ind, p});
            return ind+1;
        }
        
        res=st.top().first;
        st.push({ind, p});
        return ind-res;
    }
};
