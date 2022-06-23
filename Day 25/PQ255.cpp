//https://leetcode.com/problems/reorganize-string/


class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;
        string res="";
        
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        
        for(auto i:mp)
            pq.push({i.second, i.first});
        
        while(!pq.empty()){
            pair<int, char> p1;
            pair<int, char> p2;
            p1=pq.top();
            pq.pop();
            
            if(!pq.empty()){
                p2=pq.top();
                pq.pop();
                
                res += p1.second;
                res += p2.second;
                
                if(p1.first>1) pq.push({--p1.first, p1.second});
                if(p2.first>1) pq.push({--p2.first, p2.second});
            }
            else{
                res += p1.second;
            }
        }
        
        if(s.size() != res.size()) return "";
        return res;
    } 
};
