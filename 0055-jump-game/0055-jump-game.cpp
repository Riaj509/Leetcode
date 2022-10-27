class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int sm=0;
        for(int i=0;i<nums.size()-1;++i){
            
            if(nums[i]==0 && sm==i) return false;
            sm=max(sm,nums[i]+i);
        }
        
        
        return true;
    }
};