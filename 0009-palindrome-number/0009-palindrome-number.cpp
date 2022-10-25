class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))return false;
        if(x==0) return true;
        int sz=log10(x)+1;
        if(sz==1)return true;
        
        int n=sz/2;
        
        int reverse=0;
        while(n--){
            reverse=reverse*10+x%10;
            x/=10;
        }
        if(sz & 1)x/=10;
        
       return (x==reverse);
        
        
         
    }
};