class Solution {
public:
    int countPrimes(int n) {
        
        
        vector<bool>vis(n+1,false);
        int ans=0;
        for(int i=2;i<n;i++){
            if(vis[i])continue;
            ++ans;
            for(long long j=i;j<n;j+=i){
                vis[j]=true;
            }
        }
        return ans;
    }
};