class Solution {
public:
   int row,col;
    int uniquePaths(int m, int n) {
    vector<vector<long long int>>dp(n+1,vector<long long int>(m+1,-1));
        row=n,col=m;
       return solve(0,0,dp);
    }
    
    int solve(int x,int y,vector<vector<long long int>>&dp ){
            if(x==row-1 && y==col-1)return 1;
            if(dp[x][y]!=-1)return dp[x][y];
        long long int ret=0,ret1=0;
        if(x+1<row) ret=solve(x+1,y,dp);
        if(y+1<col)ret1=solve(x,y+1,dp);
            return dp[x][y]=ret+ret1;
    }
};