class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,a=prices[0],ans=0;
        while(i<prices.size()){
           a=min(a,prices[i]);
           ans=max(ans,prices[i]-a);
           i++;
        }
       
         return ans;
        
    }
};