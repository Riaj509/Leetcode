class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>dp(n+10,0);
        dp[0]=0;
        dp[1]=1;
        int mx=0;
        for(int i=0;i<=n;i++){
             mx=max(mx,dp[i]);
            if(i*2<=n)dp[i*2]=dp[i];
            if(i*2+1<=n)dp[i*2+1]=dp[i]+dp[i+1];
        }
        
        return mx;
    }
};