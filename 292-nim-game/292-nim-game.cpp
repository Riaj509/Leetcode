class Solution {
public:
    bool canWinNim(int n) {
//          vector<long long int> dp(n+10,0);
        
//         return check(n,dp);
        return !(n%4==0);
    }
    
//     bool check(int cur,vector<long long int>&dp){
//         if(cur<=3) return true;
        
//         if(dp[cur]!=0)return dp[cur];
        
//         for(int i=1;i<=3;i++){
//             if(!check(cur-i,dp)){
//                 dp[cur]=1;
//                 return true;   
//             }
//             else {
                
//             }
//         }
//         dp[cur]=-1;
//         return false;
//     }
};