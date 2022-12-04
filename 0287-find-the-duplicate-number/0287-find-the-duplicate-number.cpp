class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>f(n+1,0);
        
        for(auto u : nums) f[u]++;
        
        int i=1;
        for(i=1;i<=n;i++) if(f[i]>1) break;
        return i;
    }
};