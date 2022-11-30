class Solution {
public:
    int jump(vector<int>& nums) {
        
        
        int n=nums.size();
        vector<int>dp(n,10001);
        
         return solve(0,n,dp,nums);
    }
    
    int solve(int pos,int n,vector<int>&dp,vector<int>&nums){
        if(pos>=nums.size()-1) return 0;
        
        if(dp[pos]!=10001) return dp[pos];
        
        for(int i=1;i<=nums[pos];++i) {
            if(pos+i<n)
             dp[pos]=min(dp[pos],1+solve(pos+i,n,dp,nums));
        }
        return dp[pos];
    }
};