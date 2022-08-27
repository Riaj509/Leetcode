class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)dp[i][j]=0;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0)dp[i][j]+=matrix[i][j];
                else {
                    if( matrix[i][j]==1)dp[i][j]+=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                }
                cout<<dp[i][j]<<" ";
                ans+=dp[i][j];
            }
            cout<<"\n";
        }
        return ans;
    }
};