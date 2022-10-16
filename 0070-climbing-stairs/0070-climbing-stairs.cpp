class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=1;i<=n;i++){
           if(i+1<=n)dp[i+1]=dp[i-1]+dp[i];
        }
        return dp[n];
    }
};