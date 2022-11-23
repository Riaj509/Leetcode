class Solution {
public:
    int numSquares(int n) {
        
        int m=sqrt(n)+1;
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return solve(1,m,dp,n);
        
    }
    
    int solve(int str,int end,vector<vector<int>>&dp,int cur){
        if(str>end){
           if(cur==0) return 0;
            return 10001;
        }
        
        if(dp[str][cur]!=-1) return dp[str][cur];
        int ret1=INT_MAX,ret2=INT_MAX;
           if(cur-str*str>=0) ret1=1+solve(str,end,dp,cur-str*str);
            ret2=solve(str+1,end,dp,cur);
            dp[str][cur]=min(ret1,ret2);
        return dp[str][cur];
    }
};