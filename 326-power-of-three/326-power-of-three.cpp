class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
       double ck=(log10(n)/log10(3));
        if(ck-(int)ck==0)return true;
        return false;
    }
};