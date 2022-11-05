class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        
        int ans =solve(0,amount,dp,coins.size(),coins);
        if(ans==INT_MAX-1)return -1;
        return ans;
    }
    
    int solve(int id,int amount,vector<vector<int>>&dp,int n,vector<int>&coins){
        if(amount==0) return 0;
        if(id>=n || amount<0) return INT_MAX-1;
        
        if(dp[id][amount]!=-1) return dp[id][amount];
        
        int a=solve(id+1,amount,dp,n,coins);
        int b=1+solve(id,amount-coins[id],dp,n,coins);
        
        return dp[id][amount]=min(a,b);
    }
};