class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int ans,lft,ri;
        lft=dividend,ri=divisor;
        ans=lft/ri;
        cout<<ans;
        if(ans>=INT_MAX)return INT_MAX;
        if(ans<=INT_MIN)return INT_MIN;
        return ans;
        
    }
};