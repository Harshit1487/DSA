//https://leetcode.com/problems/next-greater-element-i/


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        vector<int> res;
        stack<int> st;
        st.push(nums2[nums2.size()-1]);
        res.push_back(-1);
        
        for(int i=nums2.size()-2;i>=0;i--){
            while(!st.empty() && nums2[i]>st.top()) st.pop();
            res.push_back(st.empty() ? -1 : st.top());
            st.push(nums2[i]);
        }
        reverse(res.begin(), res.end());
        
        for(int i=0;i<nums2.size();i++) mp[nums2[i]] = res[i];
        
        for(int i=0;i<nums1.size();i++) ans.push_back(mp[nums1[i]]);
        
        return ans;
    }
};
