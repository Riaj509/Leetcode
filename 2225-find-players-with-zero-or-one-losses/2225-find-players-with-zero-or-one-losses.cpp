class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        vector<vector<int>>ans(2,vector<int>());
        map<int,int> f;
        set<int>s;
        for(auto& a : matches){
            f[a[1]]++;
            s.insert(a[0]);
            s.insert(a[1]);
        }
        
        for(auto u : s){
            if(f.find(u)==f.end()) ans[0].push_back(u);
            if(f[u]==1)ans[1].push_back(u);
        }
         sort(ans[0].begin(),ans[0].end());
                sort(ans[1].begin(),ans[1].end());
return ans;
        
    }
};