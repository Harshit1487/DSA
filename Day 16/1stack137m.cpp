//https://leetcode.com/problems/daily-temperatures/


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        vector<int> res;
        res.push_back(0);
        stack<int>st;
        st.push(t.size()-1);
        
        for(int i=t.size()-2;i>=0;i--){
            while(!st.empty() && t[i]>=t[st.top()]) st.pop();
            res.push_back(st.empty() ? 0 : st.top()-i);
            st.push(i);
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};
