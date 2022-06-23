//https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/


class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        priority_queue<int> pq;
        
        for(auto it:mat){
            for(int i=0;i<it.size();i++){
                pq.push(it[i]);
                
                if(pq.size()>k)
                    pq.pop();
            }
        }
        
        return pq.top();
    }
};
