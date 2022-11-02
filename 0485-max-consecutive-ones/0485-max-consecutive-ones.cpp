class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        
        int ln=0,seg=0;
        
        for(auto u : nums){
            if(u==1)seg++;
            else{
                ln=max(ln,seg);
                seg=0;
            }
        }
        ln=max(ln,seg);
        
        return ln;
        
    }
};