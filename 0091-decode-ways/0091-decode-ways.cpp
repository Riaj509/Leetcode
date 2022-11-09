class Solution {
public:
    int numDecodings(string s) {
        
        vector<int>dp(s.size(),-1);
        return solve(0,s.size(),s,dp);
    }
    
    int solve(int str,int end,string &a,vector<int>&dp){
        if(str>=end) return 1;
        if(a[str]=='0') return 0;
        
        if(dp[str]!=-1) return dp[str];
        int l=0,r=0;
    
        l=solve(str+1,end,a,dp);
        if(str+1<end){
            int x=(a[str]-'0');
            int y=(a[str+1]-'0');
            x=x*10+y;
            if(x<=26) r=solve(str+2,end,a,dp);
        }
        
        return dp[str]=l+r;
        
    } 
};