class Solution {
public:
    string minWindow(string s, string t) {
        int ns=s.length(), nt=t.length();
        string ans="";
        if(ns<nt) return ans;
        
        unordered_map<char, int> mpt;
        
        for(int i=0;i<nt;i++)
            mpt[t[i]]++;
        
        int i=0, j=0, l=INT_MAX, c=mpt.size();
        
        while(j<ns){
            if(mpt.find(s[j])!=mpt.end()){
                mpt[s[j]]--;
                if(mpt[s[j]]==0) c--;
            }
            if(c>0) j++;
            
            else if(c==0){
                while(c==0){
                    if(mpt.find(s[i])!=mpt.end()){
                        if(j-i+1<l){
                            l=j-i+1;
                            ans = s.substr(i, j-i+1);
                        }
                        mpt[s[i]]++;
                        if(mpt[s[i]]>0) c++;
                    }
                    i++;
                }
                j++;
            }
        }
        
        return ans;
    }
};

//https://leetcode.com/problems/minimum-window-substring/
