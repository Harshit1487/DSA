class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(int i=0;i<strs.size();i++){
            string t = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(t);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};

//https://leetcode.com/problems/group-anagrams/
