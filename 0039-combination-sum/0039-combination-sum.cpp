class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n=candidates.size();
        
        
        vector<int>tmp;
        solve(0,n-1,candidates,tmp,target);
        
        return ans;
        
    }
    
    void solve(int str,int end,vector<int>&a,vector<int>&b,int tr){
        if(tr==0){
            ans.push_back(b);
            return;
        }
        
        
        for(int i=str;i<=end;++i){
            
            if(tr-a[i]>=0){
                b.push_back(a[i]);
                solve(i,end,a,b,tr-a[i]);
                b.pop_back();
            }
            
        }
    }
};