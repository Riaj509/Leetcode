class Solution {
public:    
    
    int rangeBitwiseAnd(int left, int right) {
        int cnt=0;
        int m=left,n=right;
        while(n!=m){
            cnt++;
            n>>=1;
            m>>=1;
        }
        return (m<<cnt);
    }
};
    
