//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/


class Solution {
public:
    
    string removeDuplicates(string s, int k) {
        
        vector<pair<char, int>> st = {{'#', 0}};
        
        for(int i=0;i<s.size();i++){
            
            if(st.back().first!=s[i])
                st.push_back({s[i], 1});
            
            else if(++st.back().second==k)
               st.pop_back();   
        }
        
        string r;
        
        for(auto & p:st)
            r.append(p.second, p.first);
        
        return r;
    }
};
