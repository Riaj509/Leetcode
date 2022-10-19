class Solution {
public:
    bool isHappy(int n) {
    map<long long int,bool>f;
        long long sm=n,ans=0;
        while(true){
            while(sm>0){
                ans+=(sm%10)*(sm%10);
                sm/=10;
            }
            if(ans==1) return true;
            if(f[ans]) return false;
            f[ans]=true;
            sm=ans;
            ans=0;
        }
        
    }
};