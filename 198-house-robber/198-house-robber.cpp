class Solution {
public:
    int dp[100];
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
       
        return solve(0,n,nums);
    } 
    int solve(int x,int sz,vector<int>&nums){
            if(x>=sz)return 0;
            if(dp[x]!=-1) return dp[x];
           return dp[x]=max(solve(x+1,sz,nums),nums[x]+solve(x+2,sz,nums));
        }
};