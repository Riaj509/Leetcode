class Solution {
public:
    double myPow(double x, int n) {
        
        long long m=abs(n);
        double ans=1;
        while(m>0){
            if(m&1)ans*=x;
            m>>=1;
           x*=x;
        }
        return (n<0) ? 1/ans : ans;
    }
        
};