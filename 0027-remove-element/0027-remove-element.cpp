class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        
        int l=0,r=nums.size()-1;
        
        while(l<=r){
            if(nums[l]==val){
                if(nums[r]!=val){
                     nums[l]=nums[r];
                    l++;
                }
                --r;
            }
            else l++;
        }
        return l;
    }
};