class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> res;
        
        int n=mat.size(), m=mat[0].size();
        int t=0, l=0, r=m-1, b=n-1;
        int d=1;
        
        while(l<=r && t<=b){
            if(d==1){
                for(int i=l;i<=r;i++)
                    res.push_back(mat[t][i]);
                t++, d=2;
            }
            else if(d==2){
                for(int i=t;i<=b;i++)
                    res.push_back(mat[i][r]);
                r--, d=3;
            }
            else if(d==3){
                for(int i=r;i>=l;i--)
                    res.push_back(mat[b][i]);
                b--, d=4;
            }
            else if(d==4){
                for(int i=b;i>=t;i--)
                    res.push_back(mat[i][l]);
                l++, d=1;
            }
        }
        return res;
    }
};

//https://leetcode.com/problems/spiral-matrix/
