class Solution {
public:
   int row,col;
    int uniquePaths(int m, int n) {
    vector<vector<long long int>>dp(n+1,vector<long long int>(m+1,-1));
        row=n,col=m;
       return solve(0,0,dp);
    }
    
    int solve(int x,int y,vector<vector<long long int>>&dp ){
        if(x>=row || y>=col) return 0;
            if(x==row-1 && y==col-1)return 1;
            if(dp[x][y]!=-1)return dp[x][y];
            return dp[x][y]=solve(x,y+1,dp)+solve(x+1,y,dp);
    }
};