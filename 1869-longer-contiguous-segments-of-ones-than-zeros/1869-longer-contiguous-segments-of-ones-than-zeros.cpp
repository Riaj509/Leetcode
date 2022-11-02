class Solution {
public:
    bool checkZeroOnes(string s) {
        
        
        int ln_0=0,ln_1=0,seg_0=0,seg_1=0;
        
        for(auto u : s){
            if(u=='1'){
                if(seg_0){
                    ln_0=max(ln_0,seg_0);
                    seg_0=0;
                }
                seg_1++;
            }
            else {
                if(seg_1){
                    ln_1=max(ln_1,seg_1);
                    seg_1=0;
                }
                seg_0++;
            }
        }
        if(seg_0){
                    ln_0=max(ln_0,seg_0);
                    seg_0=0;
                }
         if(seg_1){
                    ln_1=max(ln_1,seg_1);
                    seg_1=0;
                }
        return ln_1>ln_0;
    
    }
};