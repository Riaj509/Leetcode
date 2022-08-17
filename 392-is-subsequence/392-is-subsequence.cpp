class Solution {
public:
 bool isSubsequence(string s, string t) {
        int n=s.size(),m=t.size();
     if(n>m) return false;
     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        if(is_sub(s,t,n,m,dp)==n)
          return true;
        return false;
    }
    
    int is_sub(string &s,string &t, int n, int m,vector<vector<int>>&dp){
        if(n==0 || m==0) return 0;
        if(dp[n][m]!=-1)return dp[n][m];
        if(s[n-1]==t[m-1]) return dp[n][m]= 1+ is_sub(s,t,n-1,m-1,dp);
        return dp[n][m]=is_sub(s,t,n,m-1,dp);
    }
};