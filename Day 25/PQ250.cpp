//https://leetcode.com/problems/top-k-frequent-elements/


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> mp;
        
        for(int i:nums)
            mp[i]++;
        
        unordered_map<int, int>::iterator it=mp.begin();
        priority_queue<pair<int, int>> pq;
        
        for(;it!=mp.end();it++)
            pq.push(make_pair(it->second, it->first));
        
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
