class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
        
        for(int i=1;i<nums.size();++i){
            
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<nums.size();i++){
            int lft=0,ri=0;
            if(i-1>=0) lft=nums[i-1];
            if(i<nums.size()-1)ri=nums[nums.size()-1]-nums[i];
            if(lft==ri) return i;
        }
        return -1;
    }
};