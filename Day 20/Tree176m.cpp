//https://leetcode.com/problems/redundant-connection/


class Solution {
public:
    
    int findParent(int n, vector<int>& p){
        if(n==p[n]) return n;
        return findParent(p[n], p);
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> parent(n+1, 0);
        for(int i=0;i<n+1;i++)
            parent[i]=i;
        
        vector<int> res;
        for(auto v:edges){
            int n1=v[0], n2=v[1];
            int p1 = findParent(n1, parent);
            int p2 = findParent(n2, parent);
            
            if(p1==p2) res=v;
            else parent[p1]=p2;
        }
        
        return res;
    }
};
