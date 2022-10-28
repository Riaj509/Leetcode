class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        
        vector<vector<int>>ans;
        vector<int>tmp;
        check(1,n,k,ans,tmp);
        
        return ans;
    }
    
    void check(int str,int end,int k,vector<vector<int>>&ans,vector<int>tmp){
        
        if(k==0){
            ans.push_back(tmp);
            return;
        }
        
        for(int i=str;i<=end;++i){
            if(k){
                tmp.push_back(i);
                check(i+1,end,k-1,ans,tmp);
                
                tmp.pop_back();///back_track///
            }
        }
    }
};