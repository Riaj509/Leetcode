class Solution {
public:
    bool checkOnesSegment(string s) {
        
        
        int ln=0,seg=0;
        for(auto u : s){
            if(u=='1')seg++;
            else {
                if(seg)
                ln++;
                seg=0;
            }
        }
        if(seg)ln++;
        return ln==1;
        
    }
};