class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        
        long long md=1e9+7;
        int n=grid.size(),m=grid[0].size();
        
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(k+1,0)));
        dp[0][0][grid[0][0]%k]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int s=0;s<k;s++){
                    int modsm=(s+grid[i][j])%k;
                if(i>0)dp[i][j][modsm]+=dp[i-1][j][s]%md;
                if(j>0)dp[i][j][modsm]+=dp[i][j-1][s]%md;
                }
                
            }
        }
        return dp[n-1][m-1][0]%md;
    }
};