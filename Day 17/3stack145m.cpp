//https://leetcode.com/problems/flatten-nested-list-iterator/


class NestedIterator {
public:
    stack<NestedInteger*> st;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i=nestedList.size()-1;i>=0;i--)
            st.push(&nestedList[i]);
    }
    
    int next() {
        int nxt = st.top()->getInteger();
        st.pop();
        return nxt;
    }
    
    bool hasNext() {
        while(!st.empty()) {
            NestedInteger *p = st.top();
            if(p->isInteger())
                return 1;
            vector<NestedInteger> &vec = p->getList();
            st.pop();
            for(int i=vec.size()-1;i>=0;i--)
                st.push(&vec[i]);
        }
        return 0;
    }
};
