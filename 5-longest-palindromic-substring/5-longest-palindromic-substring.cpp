class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        bool dp[n][n];
        memset(dp, false, sizeof(dp));
        
        int start = 0, maxL = 1;
        
        for(int i = 0 ; i < n; i++)
            dp[i][i] = true;
        
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = true;
                start = i;
                maxL = 2;
            }
        }
        
        for(int k = 3; k <= n; k++){
            for(int i = 0 ; i < n-k+1; i++){
                int j = i + k -1;
                if(dp[i+1][j-1] && s[i] == s[j]){
                    dp[i][j] = true;
                    if(k > maxL){
                        start = i;
                        maxL = k;
                    }
                }
            }
        }
        
        return s.substr(start, maxL);
    }
};