class Solution {
public:
    bool isThree(int n) {
        
        if(n<=2) return false;
        int sq=sqrt(n);
        int cnt=0;
        
        
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if((n/i)!=i)cnt++;
            }
            if(cnt>3) return false;
        }
        if(cnt==3)  return true;
        return false;
    }
};